#include<stdio.h>
#include<stdlib.h>

typedef struct point {
  int x;
  int y;
  struct point* next;
} point;

point* createPoint(int x, int y, point* next) {
  point* p = (point*)malloc(sizeof(point));
  p->x = x;
  p->y = y;
  p->next = next;
  return p;
}

main() {
  point* root = (point*)malloc(sizeof(point));
  point* temp;
  int x, y, z;
  z = 1;
  do {
    scanf("%i %i", &x, &y);
    if (z == 1) {
      root = createPoint(x, y,NULL);
      z++;
    }
    else {
      temp = root;
      while (temp->next != NULL)
        temp = temp->next;
      point* p = createPoint(x,y,NULL);
      temp->next = p;
    }
    if (x == 0 && y == 0)
      z = 0;
  } while(z>0);
  temp = root;
  while(temp->next != NULL) {
    int a = temp->x*temp->x+temp->y*temp->y;
    printf("%d\n", a);
    temp = temp->next;
  }
}

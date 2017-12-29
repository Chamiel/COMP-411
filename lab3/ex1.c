#include <stdio.h>
main()
{
  printf("Please enter a number from 1 to 5:\n");
  int a = 0;
  scanf("%d", &a);
  if (a < 1 || a > 5) {
    printf("Number is not in the range from 1 to 5\n");
    return;
  }
  int i = 0;
  for (i = 0; i < a; i++) {
    printf("%d Hello World\n", i+1);
  }
  return;
}

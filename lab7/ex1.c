#include <stdio.h>
#include <string.h>

main()
{
  char str[20];
  do{
    fgets(str, 20, stdin);
    printf("%i\n", a_to_i(str));
  }while (a_to_i(str) != 0);
}

int a_to_i(char* str)
{
  int i;
  int num = 0;
  for (i = 0; i < strlen(str) - 1; i++) {
    num = num*10;
    num += str[i] - '0';
  }
  return num;
}

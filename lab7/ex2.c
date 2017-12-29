#include <stdio.h>
#include <string.h>

main()
{
  int num;
  char str[40];
  void i_to_a(char* str, int num, int base);
  do{
    scanf("%d", &num);
    i_to_a(str, num, 10);
    printf("%s\n", str);
  }while (num != 0);
  printf("\n");
}

void i_to_a(char* str, int num, int base)
{
  char ch;
  int i = 0;
  strcpy(str, "");
  void reverse(char* str);
  do{
    ch = num%base + '0';
    num = num/base;
    str[i++] = ch;
  } while (num != 0);
  str[i] = '\0';
  reverse(str);
}

void reverse(char* str) {
  int start = 0;
  int end = strlen(str) - 1;
  while (start<end) {
    char chr = str[start];
    str[start] = str[end];
    str[end] = chr;
    start++;
    end--;
  }
}

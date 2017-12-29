#include <stdio.h>
main()
{
  int a;
  do {
    printf("Number [1-100]: ?\n");
    scanf("%d", &a);
    if (a == 0) break;
    else if (a == 1) printf("Non-prime (special case)\n");
    else if (a % 2 == 0 && a != 2)
      printf("Non-prime, divisible by 2\n");
    else if (a % 3 == 0 && a != 3)
      printf("Non-prime, divisible by 3\n");
    else if (a % 5 == 0 && a != 5)
      printf("Non-prime, divisible by 5\n");
    else if (a % 7 == 0 && a != 7)
      printf("Non-prime, divisible by 7\n");
    else printf("Prime\n");
  } while (a != 0);
  printf("Done\n");
  return;
}

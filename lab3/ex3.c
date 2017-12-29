#include <stdio.h>
main()
{
  printf("Enter six integers:\n");
  int a[6];
  scanf("%i%i%i%i%i%i", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);
  
  printf("1234567890bb1234567890\n");
  printf("%10d  %10d\n%10d  %10d\n%10d  %10d\n", a[0], a[1], a[2], a[3], a[4], a[5]);
  return;
}

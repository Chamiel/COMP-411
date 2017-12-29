#include <stdio.h>

main()
{
  int f, n;
  do
  {
    printf("Enter a number: ");
    scanf("%d",&n);
    f = factorial(n);
    printf("%i! = %i\n",n,f);
  }while(n!=0);
}

int factorial(int n) {
  if (n == 0) return 1;
  return factorial(n-1)*n;
}

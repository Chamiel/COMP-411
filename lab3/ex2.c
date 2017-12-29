#include <stdio.h>
main()
{
  printf("Enter five floating-point numbers:\n");
  float a[5];
  scanf("%f%f%f%f%f", &a[0], &a[1], &a[2], &a[3], &a[4]);
  
  int i;
  float sum = 0;
  float product = 1;
  for (i = 0; i < 5; i++) {
    sum += a[i];
    product *= a[i];
  }
  printf("Sum is %.4f\nMean is %.4f\nProduct is %.4f\n", sum, sum/5, product);
  return;
}

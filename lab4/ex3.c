/* Example: matrices represented by 2-dimensional arrays */

#include <stdio.h>

main()
{
  int A[3][3], B[3][3],C[3][3];

  int h, i, j, k;
  puts("Please enter the values for A[0..2][0..2], one row per line:");
  for (i = 0; i < 3; i++)
  {
    scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);
  }

  puts("Please enter the values for B[0..2][0..2], one row per line:");
  for (i = 0; i < 3; i++)
  {
    scanf("%d %d %d", &B[i][0], &B[i][1], &B[i][2]);
  }

  puts("A=");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%6i", A[i][j]);
    }
    printf("\n");
  }

  puts("B=");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%6i", B[i][j]);
    }
    printf("\n");
  }

  /* multiply C = A.B: */
  
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
    {
      C[i][j] = 0;
      for (k =0; k < 3; k++)
        C[i][j] += A[i][k] * B[k][j];
    }
  puts("C=A.B=");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%6i", C[i][j]);
    }
    printf("\n");
  }

  /* multiply C = B.A: */
  
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
    {
      C[i][j] = 0;
      for (k =0; k < 3; k++)
        C[i][j] += B[i][k] * A[k][j];
    }
  
  puts("C=B.A=");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%6i", C[i][j]);
    }
    printf("\n");
  }
}

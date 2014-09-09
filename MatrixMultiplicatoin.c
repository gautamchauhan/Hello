#include <stdio.h>
 
int main()
{
  int size, i, j, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  printf("Enter the number of rows and columns of first matrix\n");
  scanf("%d", &size);
  printf("Enter the elements of first matrix\n");
 
  for (  i = 0 ; i < size ; i++ )
  {
    for ( j = 0 ; j < size ; j++ )
    {
      scanf("%d", &first[i][j]);
    }
  }
 
  printf("Enter the elements of second matrix\n");
 
  for ( i = 0 ; i < size ; i++ )
  {
  	for ( j = 0 ; j < size ; j++ )
      {
        scanf("%d", &second[i][j]);
      }
  }
 
    for ( i = 0 ; i < size ; i++ )
    {
      for ( j = 0 ; j < size ; j++ )
      {
        for ( k = 0 ; k < size ; k++ )
        {
          sum = sum + first[i][k]*second[k][j];
        }
 
        multiply[i][j] = sum;
        sum = 0;
      }
    }
 
    printf("Product of entered matrices:-\n");
 
    for ( i = 0 ; i < size ; i++ )
    {
      for ( j = 0 ; j < size ; j++ )
        printf("%d\t", multiply[i][j]);
 
      printf("\n");
    }
 
  return 0;
}

// 5.7 WAP to find out the sum of the elements stored in a matrix.

#include <stdio.h>
int main()
{
int mat[10][10] ;
int i, j, row, col, sum=0;
printf("Enter the order of the matrix : ") ;
scanf("%d %d", &row, &col) ;
printf("\nEnter the elements of the matrix : \n\n") ;
for(i = 0 ; i < row ; i++)
  for(j = 0 ; j < col ; j++)
    scanf("%d", &mat[i][j]) ;
for(i = 0 ; i < row ; i++)
  for(j = 0 ; j < col ; j++)
    sum = sum + mat[i][j] ;
printf("\nThe sum of the elements in the matrix is : %d", sum) ;
return 0;
}

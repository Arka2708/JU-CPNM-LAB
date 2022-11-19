#include <stdio.h>
int main()
{
    int row, col;
    printf("\nEnter the no. of row of the matrix: ");
    scanf("%d", &row);
    printf("\nEnter the no. of column of the matrix: ");
    scanf("%d", &col);
    int A[row][col], T[row][col];
    printf("\n\t\t********Enter the matrix********");
    for(int i=0 ; i <row ; i++)
    {
        for(int j=0 ; j <col ; j++)
        {
        printf("\n A[%d][%d] = ", i , j);
        scanf("%d", &A[i][j]);
        }
    }
    for(int i=0 ; i <row ; i++)
    {
        for(int j=0 ; j <col ; j++)
        {
           T[i][j] = A[j][i];
        }
    }
printf("\t\tThe Transpose of the matrix is-\n");
            for(int i=0 ; i < row ; i++)
           {       
                for(int j=0 ; j < col ; j++)
                    {
                        printf("%d ", T[i][j]);
                    }
                printf("\n");
            }
return 0;
}
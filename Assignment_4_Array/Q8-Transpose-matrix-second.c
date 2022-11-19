#include <stdio.h>
int main()
{   int row, col, temp;
    printf("\nEnter the no. of row of the matrix: ");
    scanf("%d", &row);
    printf("\nEnter the no. of column of the matrix: ");
    scanf("%d", &col);
    int A[row][col];
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
        for(int j=0 ; j <i ; j++)
        {
            temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
    }printf("\t\tThe Transpose of the matrix is-\n");
            for(int i=0 ; i < row ; i++)
           {       
                for(int j=0 ; j < col ; j++)
                    {
                        printf("%d ", A[i][j]);
                    }
                printf("\n");
            } 
    return 0;
}
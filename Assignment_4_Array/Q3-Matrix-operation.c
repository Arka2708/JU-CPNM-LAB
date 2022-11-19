#include <stdio.h>
int main()
{
    int k,A[3][3], B[3][3], C[3][3]={0} , sum =0;
    printf("\n\t\t********Choose the operation********\n");
    printf("For getting the sum of the two matrices enter 1\n");
    printf("For getting the difference of the two matrices enter 2\n");
    printf("For getting the product of the two matrices enter 3\n");
    printf("Enter your option = ");
    scanf("%d", &k);
    printf("\n\t\t********Enter the first matrix********\n");
    for(int i=0 ; i <3 ; i++)
    {
        for(int j=0 ; j <3 ; j++)
        {
        printf("A[%d][%d] = ", i , j);
        scanf("%d", &A[i][j]);
        }
    }
    
    printf("\n\t\t********Enter the second matrix********\n");
    for(int i=0 ; i <3 ; i++)
    {
        for(int j=0 ; j <3 ; j++)
        {
        printf("B[%d][%d] = ", i , j);
        scanf("%d", &B[i][j]);
        }
    }
    switch (k)
    {
    case 1: for(int i=0 ; i < 3 ; i++)
           {       
                for(int j=0 ; j < 3 ; j++)
                    {
                        C[i][j] = A[i][j] + B[i][j];
                    }
            }
            
            printf("\n\t\tThe Sum of the two matrices is-\n");
            for(int i=0 ; i < 3 ; i++)
           {       
                for(int j=0 ; j < 3 ; j++)
                    {
                        printf("%d ", C[i][j]);
                    }
                printf("\n");
            }
         break;

    case 2: for(int i=0 ; i < 3 ; i++)
           {       
                for(int j=0 ; j < 3 ; j++)
                    {
                        C[i][j] = A[i][j] - B[i][j];
                    }
            }
            
            printf("\n\t\tThe Difference of the two matrices is-\n");
            for(int i=0 ; i < 3 ; i++)
           {       
                for(int j=0 ; j < 3 ; j++)
                    {
                        printf("%d ", C[i][j]);
                    }
                printf("\n");
            }
         break;
    
    case 3: for ( int i = 0 ; i < 3 ; i++ )
           {
                for ( int j = 0 ; j < 3 ; j++ )
               {
                    for ( int c = 0 ; c < 3 ; c++ )
                    {
                        sum = sum + A[i][c]*B[c][j];
                    }
                    C[i][j] = sum;
                    sum = 0;
                }
            } 

            printf("\n\t\tThe Product of the two matrices is-\n");
            for(int i=0 ; i < 3 ; i++)
           {       
                for(int j=0 ; j < 3 ; j++)
                    {
                        printf("%d ", C[i][j]);
                    }
                printf("\n");
            }
         break;

    default: printf("Oops!!!! Enter a valid option");
        break;
    }
     return 0;
}
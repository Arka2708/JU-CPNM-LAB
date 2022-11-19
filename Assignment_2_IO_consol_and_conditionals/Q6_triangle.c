#include<stdio.h>

 int main()
{
    int A,B,C;
    printf("Enter the angles of the triangle :-  ");
    scanf("%d %d %d", &A, &B, &C);
    if( A >0 && B >0 && C >0)
    {
    if (A + B +C == 180)
    {
        printf("It is a valid triangle\n");
    }
    else
    {
       printf("It is not a valid triangle\n");
    }
    }
    else printf("Give a valid input");
    return 0;
} 

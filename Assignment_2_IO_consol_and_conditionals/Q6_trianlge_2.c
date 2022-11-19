#include <stdio.h>

int main()
{
    int a,b,c;
    printf("\nEnter the sides of the triangle :-  ");
    scanf("%d %d %d", &a, &b, &c);
    if ( a> 0 && b >0 && c>0)
    {
        if (a+b>c && a+c>b && b+c>a)
        {
            printf("It is a valid triangle\n");
        }
        else
        {
        printf("It is not a valid triangle\n \n");
        }
    }
    else printf("Give a valid input");
    return 0;
}
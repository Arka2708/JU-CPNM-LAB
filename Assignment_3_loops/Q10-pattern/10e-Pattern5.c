#include <stdio.h>
int main()
{
    int c=4,d;
    d=c;
    for (int i=1; i<=4-1 ; i++)
    {
        for(int j=1 ; j<=2*4-1-2*i; j++)
        {
            printf("%d ",c);
            c--;
        }
        d--;
        c=d;
        printf("\n");
    }
    return 0;
}
#include<stdio.h>

int main()
{
    int n ,s=0, count=0;
    printf("Enter a perfect square to find it's square root = ");
    scanf("%d",&n);
    for(int i=1; s<n ; i=i+2)
    {
        s = s+i;
        count +=1;
        if(s == n )
        {
            printf("Square root of %d is = %d" , n, count);
        }
        
    }
    return 0;
}
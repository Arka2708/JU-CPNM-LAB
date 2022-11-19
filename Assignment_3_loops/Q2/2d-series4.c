#include<stdio.h>

int factor(int i)
{   int f=0;
    for(int j=1 ; j<=i; j++)
   {
     if(i % j == 0)
     {
        f = f + j;
     }
   }
   return f;
}

int main()
{ 
   int n, sum = 0;
   printf("\nEnter a number to get the sum of the series = ");
   scanf("%d", &n);
   for(int i=1 ; i<=n ; i++)
   {
      sum = sum + factor(i);
   }
   printf("The sum of the series is = %d\n\n", sum);
   return 0; 
}
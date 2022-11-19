#include<stdio.h>

int fact(int i)
{   int f=1;
    for(int j=1 ; j<=i; j++)
   {
     f = f * j;
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
      sum = sum + fact(i);
   }
   printf("The sum of the series is = %d\n\n", sum);
   return 0; 
}
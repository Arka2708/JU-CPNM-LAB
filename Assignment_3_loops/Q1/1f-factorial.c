#include <stdio.h>

int main()
{ 
   int n, fact=1;
   printf("\nEnter the number to calculate it's factorial = ");
   scanf("%d", &n);
   if(n>0)
   {
    for(int i=1 ; i<=n ; i++)
    {
      fact = fact * i;
    }
    printf("%d! = %d\n\n",n , fact);
   }
   return 0; 
}
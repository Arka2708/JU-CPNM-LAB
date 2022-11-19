#include <stdio.h>

int main()
{ 
   int n, sum = 0;
   printf("\nEnter a number to get the sum of the series = ");
   scanf("%d", &n);
   for(int i=1 ; i<=n ; i++)
   {
      sum = sum + i;
   }
    
   printf("The sum of the first %d natural numbers is = %d\n\n", n, sum);
   return 0; 
}
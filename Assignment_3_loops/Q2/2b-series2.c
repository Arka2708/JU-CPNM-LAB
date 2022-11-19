#include <stdio.h>
//S= 1.2 +2.3 +3.4
int main()
{ 
   int n, sum = 0;
   printf("\nEnter a number to get the sum of the series = ");
   scanf("%d", &n);
   for(int i=1 ; i<=n ; i++)
   {
      sum = sum + i*(i+1);
   }
    
   printf("The sum of the series is = %d\n\n", sum);
   return 0; 
}
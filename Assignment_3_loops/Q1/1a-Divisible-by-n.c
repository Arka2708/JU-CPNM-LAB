#include <stdio.h>

int main()
{ 
   int n;
   printf("Enter the divisor n = ");
   scanf("%d", &n);
   for(int i=1 ; i<=100 ; i++)
   {
      if(i % n == 0)
      {
         printf("%d ", i);
      }
   }
   return 0; 
}
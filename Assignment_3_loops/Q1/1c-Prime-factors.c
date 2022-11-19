#include <stdio.h>

int main()
{ 
   int n, count;
   printf("Enter the number = ");
   scanf("%d", &n);
   for(int i=2  ; i<=n ; i++)
   {
      if(n % i == 0)
      {
         count=1;
         for (int j = 2 ; j<=i/2 ; j++)
         {
            if(i%j == 0)
            {
               count = 0;
               break;
            }
         }
            if (count==1)
            {
               printf("%d ", i);
            }
      }
   }
   return 0; 
}
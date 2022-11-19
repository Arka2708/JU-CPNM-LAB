#include <stdio.h>

int main()
{ 
   int N, count = 0;
   printf("Enter a number = ");
   scanf("%d", &N);
   for(int i=2 ; i<=(N/2) ; i++)
   {
        if(N % i == 0)
        {
         count += 1;
        }
   }
        if(count == 0) 
        {
        printf("%d is a prime number ", N);
        }
        else
        {
           printf("%d is not a prime number ", N);
        }
   return 0; 
}
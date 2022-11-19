#include<stdio.h>

int main()
{
   int N,sum=0;
   printf("\nEnter a three digit number: ");
   scanf("%d", &N);
   while(N > 0)
   {
       int R= N % 10;
       N = N / 10;
       sum = sum + R;
   }
   printf("The Sum of the digits = %d \n \n", sum);
   return 0;
}
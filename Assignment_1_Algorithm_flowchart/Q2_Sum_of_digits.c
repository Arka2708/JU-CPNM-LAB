#include<stdio.h>

int main()
{
   int N,Sum=0;
   printf("\nEnter a number: ");
   scanf("%d", &N);
   while(N > 0)
   {
       int R= N % 10;
       N = N / 10;
       Sum = Sum + R;
   }
   printf("The Sum of the digits = %d \n \n", Sum);
   return 0;
}
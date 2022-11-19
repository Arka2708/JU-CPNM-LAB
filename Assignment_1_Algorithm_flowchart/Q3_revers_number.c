#include <stdio.h>

int main()
{ 
   int N, R , S = 0;
   printf("Enter a number = ");
   scanf("%d", &N);
    while(N>0)
    {
        R = N % 10;
        N = N / 10;
        S = S * 10 + R;
    } 
   printf("The reversed number is = %d", S);
   return 0; 
}
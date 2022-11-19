#include<stdio.h>

int sum_of_digits(int num , int sum)
{
    int R = num % 10;
    num = num / 10;
    sum = sum + R;
    if(num >0)
       sum_of_digits(num , sum);
    else
       return sum;
}
int main()
{
   int num,sum=0;
   printf("\nEnter a number to get it's sum of digits: ");
   scanf("%d", &num);
   sum = sum_of_digits(num , sum);
   printf("The Sum of the digits = %d \n \n", sum);
   return 0;
}
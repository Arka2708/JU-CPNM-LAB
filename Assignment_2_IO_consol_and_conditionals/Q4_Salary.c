#include<stdio.h>

int main()
{
   int S,D,H,sum;
   printf("\nEnter the base salary: ");
   scanf("%d", &S);
   D = (S*3)/5;
   H = (S*3)/20;
   sum = S + D + H ;
   printf("The gross salary is = %d \n \n", sum);
   return 0;
}
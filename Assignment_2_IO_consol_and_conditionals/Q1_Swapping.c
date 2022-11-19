#include<stdio.h>

int main()
{
  int X,Y;
   printf("\nEnter the First Value: ");
   scanf("%d", &X);
   printf("Enter the Second Value: ");
   scanf("%d", &Y);
   int swap = X;
   X = Y;
   Y = swap;
   printf("\nFirst Value: %d\n", X);
   printf("Second value: %d\n\n", Y);
  
   return 0;
}
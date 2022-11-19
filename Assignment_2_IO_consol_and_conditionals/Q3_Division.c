#include<stdio.h>

int main()
{
  int X,Y,d;
   printf("\nEnter the First number: ");
   scanf("%d", &X);
   printf("Enter the Second number: ");
   scanf("%d", &Y);
   float D;
   if(X > Y)
   {
     D = (float)X/(float) Y;
     d = X / Y;
     printf("\nFractional number = %d/%d\n", (X-(d*Y)),Y);
     printf("Real-Valued number = %.2f\n ", D);
   }
   else
   {
     D = (float)Y /(float) X;
     printf("\nFractional number = %d / %d\n", (Y-(d*X)) , X);
     printf("Real-Valued number = %.2f \n", D);
   }
  return 0;
}
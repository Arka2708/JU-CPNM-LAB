#include<stdio.h>

int main()
{
   int Y;
   printf("\nEnter the year: ");
   scanf("%d", &Y);
   if(Y>0)
   {
   if(Y % 4 == 0 && Y % 100!= 0 || Y % 400==0)
   {
     printf("%d is a leap year. \n \n" , Y) ;
   }
   else
   {
     printf("%d is not a leap year. \n \n" , Y) ;
   }
   }
   else printf("Enter a valid year");
   return 0;
}
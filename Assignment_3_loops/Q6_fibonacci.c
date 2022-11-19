#include<stdio.h>

int main()
{ 
   int n, a=0 , b=1, c;
   printf("\nEnter the no. of fibonacci terms = ");
   scanf("%d", &n);
   printf("\n\t*********First %d numbers of the Fibonacci sequence*********\n", n);
   printf("%d %d ", a, b);
  for (int i=2 ; i<n ; i++)
	{
       c=a+b;
       printf("%d ", c); 
       a=b;
       b=c;
	}
    printf("\n\n");
   return 0; 
}
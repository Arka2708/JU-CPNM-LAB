#include<stdio.h>

int main()
{ 
 int n, r ,sum;
 int i, count =0;
 
 printf("\n\t******* First 10 Happy numbers are shown below ******* \n ");
 for(i=1;count<10;i++)
 {
  n=i; // assign next number to check
  sum=0; // reset sum
        
  while(sum!=1 && sum!=4)
  {
   sum=0;
  
   while(n>0)
   {
    r=n%10;
    sum+=(r*r);
    n=n/10;
   }
  
    n=sum;
  }
 
  if(sum==1)
  {
   printf("%d ",i);
   count +=1;
  } 
 }
 printf("\n\n");
 return 0;
}
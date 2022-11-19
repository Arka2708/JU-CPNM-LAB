#include <stdio.h>

int main()
{ 
   int  count, prime_count=0;
   printf("\n\t\t\t**********First 100 prime numbers are shown below**********\n\n");
   for(int i=2 ; prime_count<=100  ; i++)
   {
     count =0;
     for (int j=2 ; j<i ;j++)
     {
        if(i % j == 0)
       {
         count+=1;
       }
     }
       if(count== 0)
       {
         printf("\t  %d", i);
         prime_count+=1;
       }        
   }
   return 0; 
}
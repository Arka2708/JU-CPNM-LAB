#include<stdio.h>


int main()
{ 
   int i,j,k;
   printf("****************All combinations of digit 1,2,3 are shown below**************** \n");
   for(i=1 ; i<=3 ; i++)
   {
      for(j=1 ; j<=3 ; j++)
       {
          for(k=1 ; k<=3 ; k++)
           {
              printf("%d%d%d\t\t" , i, j, k) ;
            }
        }
    }
   return 0; 
}
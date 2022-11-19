#include<stdio.h>

int main()
{   
    int a=0;
    for(int i = 1 ; i <=4 ; i++)
    {
        
        for(int j =1 ; j <=4-i ; j++)
       {
         printf(" ");
            
        }
        for(int j =1 ; j <=i ; j++)
       {
         printf("%d", a+j);
            
        }
        printf("\n");
    }
     printf("\n\n");
    return 0;
}

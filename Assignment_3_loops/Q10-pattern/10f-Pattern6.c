#include<stdio.h>

int main()
{
    for(int i=1, k=0 ; i<=4 ; i++, k=0)                               
	{                                                                      
        for(int s=1 ; s<=(4-i) ; s++)                                      
		{                                                                  
		 printf(" ");                                                        
		}                                                                  
		while(k !=( (2*i)-1))                                              
		{ 
		 printf("*");
		 k++;
		}
		printf("\n");
	}
	for(int i=3, k=0 ; i>=1 ; i--, k=0)
	{ 
        for(int s=1 ; s<=(4-i) ; s++)
		{
		 printf(" ");
		}
		while(k !=( (2*i)-1))
		{ 
		 printf("*");
		 k++;
		}
		printf("\n");
    }
    return 0;
}

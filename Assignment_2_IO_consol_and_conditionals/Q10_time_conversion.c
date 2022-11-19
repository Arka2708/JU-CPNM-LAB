#include<stdio.h>

int main()
{
    int T;
    printf("\nEnter an integer number of seconds : ");
    scanf("%d", &T);
    int h,m,s;
    
    h = T / 3600;
    m = (T -(3600*h))/60;
	s = (T -(3600*h)-(m*60));   
    printf("The given number (in seconds) is equivalent to %d hours %d minutes %d seconds \n \n", h, m, s);
    return 0;
}
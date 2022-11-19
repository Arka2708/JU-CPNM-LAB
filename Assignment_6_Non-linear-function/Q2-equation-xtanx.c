#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define e 0.00001

float c;
double f(double x){
    return (x*tan(x) -c );
}

double differentiate(double x){
    return (x/pow(cos(x), 2)) + tan(x);
}

float bisection(float a,float b)
{
    float c;
    c = a;
    while ((b-a) >= e)
    {
        c = (a+b)/2;
        if (f(c) == 0.0)
            break;
        else if (f(c)*f(a) < 0)
            b = c;
        else
            a = c;
    }
return c;
}

float newton(float x0)
{
    float x1,y0, y_0;
    for( int i=1 ; i<=10000 ;i++)
    {
        y_0 = differentiate(x0);
        y0 = f(x0);
        x1 = x0 - (y0/y_0);
        if( fabs(y0/y_0) <= e)
        {

            return x0;
        }
        x0 = x1; 
    }
}


int main()
{   
    int k;
    printf("\nThe Equation is = x*tan(x) - c ");
    printf("\nEnter the value of the constant (c) : ");
    scanf("%f",&c);
    printf("\n\n\t\t********Choose the method to find roots********\n");
    printf("For Bisection method enter 1\n");
    printf("For Newton-Raphson method enter 2\n");
    printf("Exit=3\n");
    do{
        printf("\nEnter your choice = ");
        scanf("%d", &k);
        switch (k){
            case 1:  
                    { float a=0,b=2;
                    for(int i=1;i<=3;i++)
                        {
                        printf("\nThe %dth root is : %.3f",i,bisection(a,b));
                        a=  a+3.141;
                        b = b+3.141;
                        }
                    }
                break;
            case 2: {
                    float a=0,b=2, x0=(a+b)/2;
                    for(int i=1;i<=3;i++){
                    printf("\nThe %dth root is : %.3f",i,newton(x0));
                    x0 = x0 + 3.141;
                    }
                break;
                }
            case 3:
                printf("Exit point\n");
                break;
            default:
                printf("Oops!!!... Enter the correct option\n");
                break;
        }
    }
    while(k!=3);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define e 0.0001
double f(float x)
{
    return (x*x*x - 2*x -5);
}

double differentiate(float x)
{
    return (3*x*x - 2);
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
    printf("\nThe Equation is = x^3 - 2x - 5 ");
    printf("\nThe root lies between 2 and 3\n");
    printf("\n\n\t\t********Choose the method to find roots********\n");
    printf("For Bisection method enter 1\n");
    printf("For Regula Falsi method enter 2\n");
    printf("For Newton-Raphson method enter 3\n");
    printf("Exit=4\n");
    do
    {
        printf("\nEnter your choice = ");
        scanf("%d", &k);
        switch (k)
        {
            case 1:  
                    {float x0, x1, x2;
                     double y0, y1, y2;
                     int n,i;
                     printf("\nEnter the interval x0 and x1: ");
                     scanf("%f %f", &x0 , &x1);
                     /*printf("\nEnter tolerable error:");
                     scanf("%f", &e);*/
                     printf("\nEnter maximum no. of iteration: ");
                     scanf("%d", &n);
                     y0 = f(x0);
                     y1 = f(x1);
                    for( i=1 ; i<=n ; i++)
                    {   
                        x2 = (x0 + x1)/2;
                        y2 = f(x2);
                        if (fabs(y2) <= e)
                        {
                            printf("After  %3d  iterations -> x = %7.5f , f(x) = %lf\n", i, x2 , y2);
                            break;
                        }
                        if((y0 * y2) > 0)
                        {
                            x0 = x2;
                            y0 = y2;
                        }
                        else
                        {
                            x1 = x2;
                            y1 = y2;
                        }
                        printf("Iteration no. %3d :-   x = %7.5f\n", i, x2);
                    }
                    if(i>=n)
                    {
                    printf("\nThe solution does not converge in %d iterations\n", n);
                    printf("x2 = %7.5f , y2 = %lf\n\n", x2,y2);
                    }
                break;
                    }
           
            case 2: 
                    {float x0, x1, x2;
                     double y0, y1, y2;
                     int n,i;
                     printf("\nEnter the interval x0 and x1: ");
                     scanf("%f %f", &x0 , &x1);
                     /*printf("\nEnter tolerable error:");
                     scanf("%f", &e);*/
                     printf("\nEnter maximum no. of iteration: ");
                     scanf("%d", &n);
                     y0 = f(x0);
                     y1 = f(x1);
                    for( i=1 ; i<=n ; i++)
                    {
                        x2 = ((x0 * y1) - (x1 * y0)) / (y1 - y0);
                        y2 = f(x2);
                        if (fabs(y2) <= e)
                        {
                            printf("\nAfter  %3d  iterations -> x = %7.5f , f(x) = %lf", i, x2 , y2);
                            break;
                        }
                        if((y0 * y2) > 0)
                        {
                            x0 = x2;
                            y0 = y2;
                        }
                        else
                        {
                            x1 = x2;
                            y1 = y2;
                        }
                        printf("Iteration no. %3d :-   x = %7.5f\n", i, x2);
                    }
                    if(i>=n)
                    {
                    printf("\nThe solution does not converge in %d iterations\n", n);
                    printf("x2 = %7.5f , y2 = %lf\n\n", x2,y2);
                    }
                break;
                }
            case 3: {
                    float a=0,b=2,x0=(a+b)/2;
                    for(int i=1;i<=3;i++){
                    printf("\nThe %dth root is : %.3f",i,newton(x0));
                    x0 = x0 + 3.141;
                    }
                    break;
                }
            case 4:
                printf("Exit point\n");
                break;
            default:
                printf("Oops!!!... Enter the correct option\n");
                break;
        }
    }
    while(k!=4);
    return 0;
}
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.14
#define f(x) sin(x)
#define df(x) cos(x)
float forward_difference(float x0,float dx)
{
    float dfx;
    dfx=(f(x0+dx)-f(x0))/dx;
    return dfx;
}
float backward_difference(float x0,float dx)
{
    float dfx;
    dfx=(f(x0)-f(x0-dx))/dx;
    return dfx;
}
float centre_difference(float x0,float dx)
{
    float dfx;
    dfx=(f(x0+dx)-f(x0-dx))/(2*dx);
    return dfx;
}
void percentage_error(float x0,float dfx)
{
    float f1x;
    f1x=df(x0);
    float error_percent;
    error_percent=(fabs((dfx-f1x)/f1x)*100);
    printf("\nThe relative percentage error is=%f",error_percent);
}
int main()
{
    float x0,f1,f0,dx,dfx;
    int choice;
    printf("Enter the value of x(in degrees)=");
    scanf("%f",&x0);
    x0=x0*PI/180;
    do{
        printf("\n1.Forward difference\n2.Backward diffrence\n3.Central difference\n4.Exit\nEnter the choice=");
        scanf("%d",&choice);
        printf("\nEnter the value of dx(in degrees)=");
        fflush(stdin);
        scanf("%f",&dx);
        dx=dx*PI/180;
        switch(choice)
        {
            case 1:
            dfx=forward_difference(x0,dx);
            printf("The value is=%f\n",dfx);
            percentage_error(x0,dfx);
            break;
            case 2:
            dfx=backward_difference(x0,dx);
            printf("The value is=%f\n",dfx);
            percentage_error(x0,dfx);
            break;
            case 3:
            dfx=centre_difference(x0,dx);
            printf("The value is=%f\n",dfx);
            percentage_error(x0,dfx);
            break;
            case 4:
            printf("EXIT POINT !!!!!!!!!!\n");
            break;
            default:
            printf("Invalid choice");
        }
    }while(choice!=4);
    return 0;
}
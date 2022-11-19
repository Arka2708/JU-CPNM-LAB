#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define f(x,y) 2*x*y
#define g(x,y) x*x+y*y
void eulers_method(int choice,int n,float val)
{
    double h;
    double y[100],f[100],x[100];
    if(choice==1)
    {
        h=fabs(val)/n;
        x[0]=0;
        y[0]=0.5;
        f[0]=f(x[0],y[0]);
        for(int i=1;i<=n;i++)
        {
            y[i]=y[i-1]+h*f(x[i-1],y[i-1]);
            x[i]=x[0]+(double)i*h;
            f[i]=f(x[i],y[i]);
        }
    }
    if(choice==2)
    {
        h=fabs(val)/n;
        x[0]=0;
        y[0]=1.0;
        f[0]=g(x[0],y[0]);
        for(int i=1;i<=n;i++)
        {
            y[i]=y[i-1]+h*f[i-1]; 
            x[i]=x[0]+(double)i*h;
            f[i]=g(x[i],y[i]);
        }
    }
    printf("The value of y(%f)=%lf",val,y[n]);
}
void runge_kutta_2nd_order_method(int choice,int n,float val)
{
    double f[100],x[100],y[100],k1[100],k2[100],h,g[100],x1[100],y1[100];
    if(choice==1)
    {
        x[0]=0;
        y[0]=0.5;
        f[0]=f(x[0],y[0]);
        h=fabs(val)/n;
        k1[0]=h*f[0];
        k2[0]=h*f((x[0]+h),(y[0]+k1[0]));
        for(int i=1;i<=n;i++)
        {
            y[i]=y[i-1]+(k1[i-1]+k2[i-1])/2;
            x[i]=x[0]+(double)i*h;
            f[i]=f(x[i],y[i]);
            k1[i]=h*f[i];
            k2[i]=h*f((x[i]+h),(y[i]+k1[i]));
        }
        printf("The value of y(%f)=%lf",val,y[n]);
    }
    if(choice==2)
    {
        x[0]=0.00;
        y[0]=1.00;
        g[0]=g(x[0],y[0]);
        h=fabs(val)/n;
        k1[0]=h*g[0];
        x1[0]=x[0]+h;
        y1[0]=y[0]+k1[0];
        f[0]=g(x1[0],y1[0]);
        k2[0]=h*f[0];
        for(int i=1;i<=n;i++)
        {
            y[i]=y[i-1]+(k1[i-1]+k2[i-1])/2;
            x[i]=x[0]+(double)i*h;
            g[i]=g(x[i],y[i]);
            k1[i]=h*g[i];
            x1[i]=x[i]+h;
            y1[i]=y[i]+k1[i];
            f[i]=g(x1[i],y1[i]);
            k2[i]=h*f[i];
        }
        printf("The value of y(%f)=%lf",val,y[n]);
    }
}
int main()
{
    int choice;
    printf("1.dy/dx=2xy\n2.dy/dx=x^2+y^2\nEnter the choice=");
    scanf("%d",&choice);
    int choice2,n;
    printf("1.Eulers method\n2.Runge kutta 2nd order\nEnter the choice=");
    scanf("%d",&choice2);
    float x;
    printf("Enter the value of x to be found out=");
    scanf("%f",&x);
    fflush(stdin);
    printf("Enter the number of divisions=");
    scanf("%d",&n);
    switch(choice)
    {
        case 1:
        switch(choice2)
        {
            case 1:
            eulers_method(1,n,x);
            break;
            case 2:
            runge_kutta_2nd_order_method(1,n,x);
            break;
            default:
            printf("Invalid choice");
        }
        break;
        case 2:
        switch(choice2)
        {
            case 1:
            eulers_method(2,n,x);
            break;
            case 2:
            runge_kutta_2nd_order_method(2,n,x);
            break;
            default:
            printf("Invalid choice");
        }
        break;
        default:
        printf("Invalid choice");
    }
    return 0;
}
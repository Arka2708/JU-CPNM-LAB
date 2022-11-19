#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void Newton_forward_difference( int n)
{
   float x,u1,u,y;
    int i,j,fact;
    float a[n][n+1];
    printf("Enter Values of X\n");
    for(i=0;i<n;i++)
          scanf("%f",&a[i][0]);
    printf("Enter Values of Y\n");
    for(i=0;i<n;i++)
          scanf("%f",&a[i][1]); 
    printf("Enter value of x for which you want y\n");
    scanf("%f",&x);

    //Find the Difference Table    
    for(j=2;j<n+1;j++)
    {
        for(i=0;i<n-j+1;i++)
            a[i][j] = a[i+1][j-1]-a[i][j-1];
    }

    //Print the Difference Table
    printf("The Difference Table is as follows:\n");
    for(i=0;i<n;i++)
    {
     for(j=0;j<=n-i;j++)
        printf("%f ",a[i][j]);
     printf("\n");
    }
    
    //find u
    u= (x - a[0][0])/(a[1][0]-a[0][0]);
    //Initial y, u1, k
    y=a[0][1]; 
    u1=u;
    fact=1;
    for(i=2;i<=n;i++)
    {
        y=y+(u1*a[0][i])/fact;
        //Update k, u1
        fact=fact*i; 
        u1=u1*(u-(i-1));
    }
    printf("\n\nValue at X=%g is = %f", x,y);
}

void Newton_backward_difference(int n )
{
    float x,u1,u,y;
    int i,j,fact;
    float a[n][n+1];
    printf("Enter Values of X \n");
    for(i=0;i<n;i++)
          scanf("%f",&a[i][0]);
    printf("Enter Values of Y\n");
    for(i=0;i<n;i++)
          scanf("%f",&a[i][1]);
          
    printf("Enter value of x for which you want y\n");
    scanf("%f",&x);

    //Find the Difference Table    
    for(j=2;j<n+1;j++)
    {
        for(i=0;i<n-j+1;i++)
            a[i][j] = a[i+1][j-1]-a[i][j-1];
    }

    //Print the Difference Table
    printf("The Difference Table is as follows:\n");
    for(i=0;i<n;i++)
    {
     for(j=0;j<=n-i;j++)
        printf("%f ",a[i][j]);
     printf("\n");
    }
    
    //find u
    u= (x - a[n-1][0])/(a[1][0]-a[0][0]);
    y=a[n-1][1]; 
    //Initial k, u1, j
    u1=u;
    fact=1;
    j=2;  //corresponds to column no.
    for(i=n-2;i>=0;i--)
    {
        y=y+(u1*a[i][j])/fact;
        //Update k, u1, j
        fact=fact*j; 
        u1=u1*(u+(j-1));
        j++;
    }
    printf("\n\nValue at X=%g is = %f", x,y);
}

void Lagrange(int n){
    int i,j;
    float x[n],y[n],X,sum=0,term;
    printf("\n\t****Enter all the values of x****\n");
    for (i = 0 ; i < n ; i++) {
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
    }
    printf("\t****Enter all the values of f(x) corresponding to x respectively****\n");
    for (j = 0 ; j < n ; j++) {
            printf("y[%d] = ", j);
            scanf("%f", &y[j]);
        } 
    printf("Enter value of x for which you want y\n");
    scanf("%f",&X);
     for(i=0;i<n;i++)
    {
        term=1;
        for(j=0;j<n;j++)
        {   
            if(i!=j)
               term = term * ((X - x[j])/(x[i]-x[j]));
        }
        sum=sum + term * y[i];    
    }
    printf("\nValue at X=%g is = %f", X,sum);
}

int main()
{
    int i,j,k,n;
    printf("\n\n\t\t********Choose the method to find roots********\n");
    printf("For Lagrange's Interpolation enter 1\n");
    printf("For Newton's forward difference Interpolation enter 2\n");
    printf("For Newton's backward difference Interpolation 3\n");
    printf("Exit=4\n");
    printf("Enter the number of data points to be given : ");
    scanf("%d", &n);
    do
    {
        printf("\nEnter your choice = ");
        scanf("%d", &k);
        switch (k)
        {
            case 1:{ 
                    Lagrange(n);
                    break;
                    }
            case 2:{
                    
                   Newton_forward_difference(n);
                   break;
                   }
            case 3:{
                   Newton_backward_difference(n);
                   break;
                   }
            case 4:{
                 printf("EXIT POINT!!!!!!!!\n");
                 break;
                  }
            default: {
               printf("\nEnter correct choice!!!!!!\n");
               break;
                  }
        }
    }while(k!=4);
    return 0;

}
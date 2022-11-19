#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define n 3

void display(float a[][n+1])
 {
     for(int i=0; i<n ; i++)
     {
         for ( int j=0; j<n+1 ; j++)
         {
             printf("%7.5f\t", a[i][j]);
         }
         printf("\n");
     }
 }  

 void display_solution(float x[n])
 {
     for(int i=0; i<n ; i++)
     {
        printf("%7.5f\t", x[i]);
     }   
    printf("\n");
 }  

float findSum(int i,float a[][n+1])
{
     float sum=0;
     for(int j=0;j<n;j++)
     {  
       if(i!=j)  
         sum+=a[i][j];
     }
     return sum;
} 

bool isMethodApplicable(float a[][n+1]) {
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){    
           if(fabs(a[i][i])>findSum(i,a))
              break;
           else  
              return false;   
        }
   }
   return true;
}

void gauss_elimination(void)
{
    float a[n][n+1],value[n];
    printf("Enter the Augmented Matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++){
           scanf("%f",&a[i][j]);
        }
    }
    display(a);
    printf("\n");
    //Converts the Augmented matrix to Upper Triangular Matrix form
    int i,j,k;
    float ratio;
    for(k=0;k<n;k++){
        for(i=k+1;i<n;i++){
            ratio=a[i][k]/a[k][k];
            for(j=0;j<n+1;j++){
                a[i][j]=a[i][j] -  (ratio * a[k][j]);
            }
            display(a); 
            printf("\n");
        }
    }
    //Performs Back Substitution to find values of Unknowns
    float sum;
    value[n]= (a[n][n+1]/a[n][n]); 
    for(i=n-1;i>=0;i--){
        sum=0;
        for(j=i+1;j<n;j++){
            sum = sum + a[i][j] * value[j];  
        }
        value[i] = (a[i][n]-sum)/a[i][i];
    } 

    printf("\nValues of unknowns are:\n");
    for(i=0;i<n;i++){
         printf("Root%d = %7.5f\n",i+1,value[i]);
    }

}

void gauss_jordon(void)
{
    float a[n][n+1],value[n];
    printf("Enter the Augmented Matrix\n");
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n+1;j++)
        scanf("%f",&a[i][j]);
    }
    display(a);
    printf("\n");
    int i,j,k,p;
    float m ;
    for( i=0;i<n;i++)
    {
        int row = i;
        while(a[i][i]==0 && row<=n)//for avoiding division by zero;
        {
            for(p=1 ; p<=n+1 ;p++)
            {
                float temp = a[i][p];
                a[i][p] = a[row+1][p];
                a[row+1][p] = temp;
            }
            row++;
        }

        m = a[i][i];
        for(k=0;k<n+1;k++){
                a[i][k]=a[i][k]/m;
        }
        display(a);
        printf("\n");
        for(j=0;j<n;j++){
            if(j!=i){
                m=a[j][i];
                for(k=0;k<n+1;k++)
                    a[j][k]=a[j][k] -( m* a[i][k]);
            }
        }
        display(a);
        printf("\n");
    }
    printf("Values of unknowns are:\n");
    for(i=0;i<n;i++)
    {
       printf("Root-%d = %f\n",i+1,(a[i][n]/a[i][i]));
    }
}

void jacobi(void)
{   int i,j,k;
    float a[n][n+1],x[n],xnew[n],sum=0;
    printf("Enter the Augmented Matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<n+1;j++)
            scanf("%f",&a[i][j]);
    }
    
    display(a);
    printf("\n");
    
     if(!isMethodApplicable(a))
     {
        printf("Gauss Jacobi Method can't be applied\n");
        return ;
     }
     else{
            printf("Gauss Jacobi Method is applicable\n");
            for( i=0;i<n;i++){
                x[i] = 0;
            }
            display_solution(x);
            printf("\n");
            for(k=1 ; k<=20 ; k++){
                for( i=0;i<n;i++){
                    sum= 0;
                    for(int j=0 ; j<n ; j++){
                        if(i!=j){
                            sum = sum + (a[i][j] * x[j]);
                        }
                        xnew[i]=( a[i][n] - sum ) / a[i][i];
                    }
                
                    for(int p=0;p<n;p++){
                        x[p]=xnew[p];
                    }  
                } 
                    printf("Iteration %d : ", k );
                    display_solution(xnew);
                    printf("\n");
            }
     }
}
   
int main()
{
    int k;
    printf("\n\n\t\t********Choose the method to find roots********\n");
    printf("For Gaussian elimination enter 1\n");
    printf("For Gauss-Jordon elimination enter 2\n");
    printf("For Jacobi's method enter 3\n");
    printf("Exit=4\n");
    do
    {
        printf("\nEnter your choice = ");
        scanf("%d", &k);
        switch (k)
        {
            case 1:{  
                    gauss_elimination();
                    break;
                    }
            case 2:{
                   gauss_jordon();
                   break;
                   }
            case 3:{
                   jacobi();
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
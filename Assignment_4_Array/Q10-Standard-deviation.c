#include <stdio.h>
#include <math.h>
int main()
{
    
    int n, sum = 0;
    float mean, md = 0.0 , sd = 0.0;
    printf("\nEnter the no. of integer values: ");
    scanf("%d", &n);
    int A[n];
    for(int i=1 ; i <=n ; i++)
    {
        printf("\nEnter the %dth value: ", i);
        scanf("%d", &A[i-1]);
    }
    
    for(int i=0 ; i <n ; i++)
    {
        sum = sum + A[i];
    }
    mean = (float)(sum / n);
    
    for(int i=0 ; i <n ; i++)
    {
        md = md + pow(((float)A[i]-mean), 2);
    }
    
    sd = sqrt((md/(n-1)));
    printf("\nStandard Deviation of the given numbners is = %f", sd);
    printf("\n\n");
    return 0;
}
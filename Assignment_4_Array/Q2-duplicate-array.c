#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    int A[n], B[n];
    for(int i=1 ; i <=n ; i++)
    {
        printf("\n Enter the %dth term of the array: ", i);
        scanf("%d", &A[i-1]);
    }

    printf("\nOriginal array: ");    
    for (int i = 0; i < n; i++) 
    {     
        printf("%d ", A[i]);     
    }      
    printf("\n");
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(A[i] == A[j])
            { 
                for (int k = j; k < n-1; k++)  
                {  
                    A[k] = A[k + 1];  
                }   
                n--;  
                j--;      
            }
        }
    }
  
    for (int i = 0; i < n; i++) 
    {     
        B[i] = A[i];     
    }
    
    printf("\nReverse array without duplicate elements: ");    
    for (int i = n-1; i >= 0; i--) 
    {     
        printf("%d ", B[i]);     
    }      
    printf("\n");
    return 0;
}
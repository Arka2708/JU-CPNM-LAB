#include <stdio.h>

int main()
{
    int n, temp;
    printf("Enter the length of the array : ");
    scanf("%d", &n);
    int A[n];
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
   
    for(int i = 0; i<n/2; i++)
    {
        temp = A[i];
        A[i] = A[n-i-1];
        A[n-i-1] = temp;
    }

    printf("\nReverse Array: ");
    for(int i=0;i<n;i++) 
    {
      printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}
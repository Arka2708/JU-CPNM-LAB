#include <stdio.h>
int main()
{
    int n, big , small=0, range;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    int A[n];
    for(int i=0 ; i < n ; i++)
    {
        printf("\n A[%d]= ", i);
        scanf("%d", &A[i]);
    }
    small = A[0];
    big = A[0];
    for(int i=0 ; i < n ; i++)
    {
        if(small > A[i])
        {
            small = A[i];
        }
        if(big < A[i])
        {
            big = A[i];
        }
    }
    
    range = big - small;
    printf("\nThe range of the set of integers is = %d\n\n", range);
   
    return 0;
}
#include <stdio.h>
int main()
{
    int n , sum = 0;
    printf("Enter the number of elements of the array : ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n ;i++)
    {
        printf("a[%d] = " , i);
        scanf("%d", &a[i]);
    }
    int *ptr = &a[0];
    printf("The elements of the array are : ");
    for(int i=0; i< n;i++)
    {
       printf("%d ",*(ptr+i));
       sum = sum + *(ptr+i) ;
    }
    printf("\nThe sum of all elements of the array is = %d\n", sum);
    return 0;
}
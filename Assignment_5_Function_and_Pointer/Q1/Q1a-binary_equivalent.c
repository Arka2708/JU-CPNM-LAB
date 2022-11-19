#include <stdio.h>

int binary_equivalent(int num)
{   
    if(num==0)
        return 0;
    else
    {
        return (num%2) +10* binary_equivalent(num/2);
    }
}

int main()
{
    int num;
    printf("Enter a number to get it's binary equivalent : ");
    scanf("%d", &num);
    int bin = binary_equivalent(num);
    printf("Binary equivalent of %d is = %d", num , bin);
    return 0;
}
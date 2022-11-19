#include<stdio.h>
#include<math.h>

void decimal_octal(int num, int base)
{
        int rem = num%base;
        if(num==0)
            return;
         decimal_octal(num/base, base);
        if(rem < 10)
            printf("%d", rem);
}

int main()
{
    int n ;
    printf("\nEnter the number to calculate it's octal equivalent = ");
    scanf("%d", &n);
    printf("Octal of this number is = " );
    decimal_octal(n, 8);
    return 0;
}

#include <stdio.h>

int main()
{
    int n, i;
    printf("\t\t\tCURVE FITTING\n");
    printf("Enter the number of values: ");
    scanf("%d", &n);
    float arrA[n];
    float arrB[n];
    printf("Enter the values of x:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &arrA[i]);
    }
    printf("Enter the values of y:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &arrB[i]);
    }
    
    float sumA = 0, sumB = 0, sumAB = 0, sumAA = 0, a0, a1;
    for (i = 0; i < n; i++)
    {
        sumA = sumA + arrA[i];
    }
    printf("Sum of x: %f\n", sumA);
    for (i = 0; i < n; i++) 
    {
        sumB = sumB + arrB[i];
    }
    printf("Sum of y: %f\n", sumB);
    for (i = 0; i < n; i++)
    {
        sumAB = sumAB + (arrA[i] * arrB[i]);
    }
    printf("Sum of xy: %f\n", sumAB);
    for (i = 0; i < n; i++)
    {
        sumAA = sumAA + (arrA[i] * arrA[i]);
    }
    printf("Sum of x^2: %f\n", sumAA);
    
    a0 = ((sumB * sumAA) - (sumA * sumAB)) / ((n * sumAA) - (sumA * sumA));
    printf("Value of a0: %f", a0);
    a1 = ((n * sumAB) - (sumA * sumB)) / ((n * sumAA) - (sumA * sumA));
    printf("\nValue of a1: %f", a1);
    printf("\nEquation of the straight line: y = %0.3fx + %0.3f\n", a1, a0);
    return 0;
}
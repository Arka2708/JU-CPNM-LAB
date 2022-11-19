#include <stdio.h>
#include <string.h>

int main(){
char operator;
int a;
printf("Enter the operator + or - : "); scanf("%c", &operator);
char num1[40], num2[40], ans[41];
int count = 0;
printf("Enter the first number : "); scanf("%s", num1);
printf("Enter the second number : "); scanf("%s", num2);

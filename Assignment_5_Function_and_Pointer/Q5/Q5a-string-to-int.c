#include <stdio.h>

int string_to_int(char string[], int length)
{
    int j =1, number =0;
    for(int i=length-1 ; i>=0 ;i--)
    {
        int digit = string[i];
        digit = (digit - 48);
        number = number + (digit*j);
        j = j*10;
    }
    return number;
}
int main()
{
    char string[256];
    int integer, length=0;
    printf("Enter the number string : ");
    scanf("%s", string);
    while (string[length] != '\0')
    {
       length++;
    }
    integer = string_to_int(string, length);
    printf("The value of the integer is %d", integer);
    return 0;
}
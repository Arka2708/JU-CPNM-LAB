#include <stdio.h>

void integer_to_string(char string[], int integer)
{
    int i, rem, length = 0, n;
    n = integer;
    while (n != 0)
    {
        length++;
        n /= 10;
    }
    for (i = 0; i < length; i++)
    {
        rem = integer % 10;
        integer = integer / 10;
        string[length - (i + 1)] = rem + '0';
    }
    string[length] = '\0';
}

int main()
{
    int integer, length =0;
    printf("Enter a integer : ");
    scanf("%d", &integer);
    char string[256];
    integer_to_string(string, integer);
    printf("The string is : %s\n", string);
    return 0;
}
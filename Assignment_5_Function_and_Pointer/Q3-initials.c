#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    int i=0;
    printf("Enter the string : ");
    gets(str);
    printf("%c", *str);
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            i++;
            printf("%c", *(str + i));
        }
        i++;
    }
    return 0;
}
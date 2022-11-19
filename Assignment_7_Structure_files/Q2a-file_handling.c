#include <stdio.h>
int main() 
{
    FILE *ptr;
    ptr = fopen("Q2a-file_handling.c", "r");
    char c = fgetc(ptr);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    return 0;
}

#include <stdio.h>

int strend(char *s, char *t) 
{
	char *bs = s;          
    char *bt = t;           
    
    while (*bs) 
    {
        t = bt;
        for (s = bs; *s == *t; s++, t++) 
        {
            if (*s == '\0' && *t == '\0') 
            {
                return 1;
            }
        }
        bs++;
    }
    return 0;
}

int main() {
	char s[100],t[50];
    printf("Enter a string: ");
    gets(s);
    printf("Enter a string to check if it occurs at the end of the string : ");
    gets(t);
    int result = strend(s,t);
    printf("%d", result);
	return 0;
}


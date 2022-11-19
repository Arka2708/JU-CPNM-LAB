#include <stdio.h>
int check_vowel(char ch)
{
    if( ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
        return 1;
    else
        return 0;
}
int main(){
    char str[80];
    int i, found = 0, count = 0;
    printf("Enter a string: ");
    gets(str);
    printf("Vowels in successions are :\n");
    for (i = 0; str[i] != '\0'; i++)
    {
        if (check_vowel(str[i]))
            found++;
        else
            found = 0;
        if (found == 2){
            printf("%c%c\n", str[i - 1], str[i]);
            found = 1;
            count++;
        }
    }
    printf("\nTotal number of occurences : %d\n", count++);
    return 0;
}


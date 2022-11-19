#include <stdio.h>
int main(){
    char str[25], rev[25];
    printf("Enter a string : ");
    gets(str);
    int i,length = 0;
    while (str[length] != '\0'){
        length++;
    }
    int count =0;
    for (i = 0; i < length/2; i++){
        if(str[i] == str[length - i -1])
           count++;
    }
    if( count == i)
        printf("The string is a palindrome\n"); //radar level radar
    else
        printf("The string is not a palindrome\n");
    
    int word = 1, chr=0;
    for(int i = 0; i < length, str[i] != '\0'; i++){  
        if(str[i] == ' ') {
            word++;
            chr++;  
        }
        else
          chr++;
    }  
    printf("\nNumber of characters in the string is : %d", chr);
    printf("\nNumber of words in the string is: %d", word);
    return 0;
}
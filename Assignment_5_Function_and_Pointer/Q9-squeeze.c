#include <stdio.h>
#include <string.h>
int mystrlen(char s[]){
    int length =0;
    while (s[length] != '\0'){
        length++;
    } 
    return length;
}
int check(char s[], char c){
    int flag = 0;
      for(int i=0 ; i< mystrlen(s) ; i++){
          if(s[i]==c){
             flag = 1;
             break;}
          else
            flag = 0;
        }return flag;      
}
void squeeze(char s[], char c){
    int length = mystrlen(s);
    for(int i=0; i<length; i++) {
        if(s[i] == c){ 
            for (int k = i; k < length; k++)  {  
                s[k] = s[k + 1];  
            }   
            length--;  
            i--;}
    }printf("New string is : %s", s);
}
int main(){
    char s[100],c;
    printf("Enter a string: ");
    gets(s);
    printf("Write the character you want to remove : ");
    scanf("%c", &c);
    if(check(s,c)==1)    
        squeeze(s,c);
    return 0;
}
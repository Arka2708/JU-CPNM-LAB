#include <stdio.h>
#include <string.h>
int main(){
    char str1[50], str2[50];
    printf("Enter the string : ");
    scanf("%[^\n]s", str1);
    int length =0 , k;
    while (str1[length] != '\0'){
        length++;
    } 
    for(int i =0, j=0 ; j < length ; j++){
        if(str1[j]== ' ' || j == length -1 ){
            if(j<length - 1)
                 k = j-1;
            else
                 k =j;
            while(i<k){
                int temp = str1[i];
                str1[i] = str1[k];
                str1[k] = temp;
                i++;
                k--;
            }   
            i= j+1;
        }
    }
    for(int i=0; i<length ; i++){
        str2[i] = str1[i];
    }
    printf("The new string is : %s\n ", str2);
    return 0;
}
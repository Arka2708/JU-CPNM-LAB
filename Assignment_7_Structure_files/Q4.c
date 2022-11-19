#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
char operator;
printf("Enter the operator + or - : "); scanf("%c", &operator);
char num1[40], num2[40], ans[41];
int count = 0;
printf("Enter the first number : "); scanf("%s", num1);
printf("Enter the second number : "); scanf("%s", num2);
if(operator == '+'){
        int buffer = 0;
        int len1 = strlen(num1);
        int len2 = strlen(num2);
        int a = 0, b = 0;
    while (len1 && len2){
        a = num1[((len1)-1)] - 48;
        b = num2[((len2)-1)] - 48;
        int val = a+b+buffer;
        ans[count] = (val%10) + 48;
    if(val >= 10) buffer = 1;
    else  buffer = 0;
    count++;
    len1--;
    len2--;
    }
    while (len1){
        a = num1[((len1)-1)] - 48;
        int val = a+buffer;
        ans[count] = (val%10) + 48; 
        count++;
        if(val >= 10) buffer = 1; else buffer = 0;
        len1--;
    }
    while (len2){
        b = num2[((len2)-1)] - 48;
        int val = b+buffer;
        ans[count] = (val%10) + 48; 
        count++;
        if(val >= 10) buffer = 1; else buffer = 0;
        len2--;
    }
    if(buffer){ 
        ans[count] = '1'; 
        count++; }
}
else{
    // We are taking 'a' as always the bigger number and 'b' as smaller, otherwise
    // put a -ve sign at the start !
    int buffer = 0;
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int flg = 0; // 1 if a > b else flg = 2 ;
    if(len2 > len1) flg = 2;
    else if(len2 < len1) flg = 1;
    if(flg == 0){
        for(int i = 0; i<40; i++){
        if(num1[i] > num2[i]){ flg = 1; break ; }
        else if(num1[i] < num2[i]){ flg = 2; break ; }
        }
    }
    if(flg == 2){ 
        for(int i = 0; i<40; i++){ 
            char temp = num1[i];
            num1[i] = num2[i]; num2[i] = temp; 
        } 
    }
        len1 = strlen(num1);
        len2 = strlen(num2);
        int a = 0, b = 0;
    while (len1 && len2){
        a = num1[((len1)-1)] - 48;
        b = num2[((len2)-1)] - 48;
        int val = a - buffer - b;
        if(val < 0){ 
            val = a + 10 - buffer - b;
            buffer = 1; }
        else buffer = 0;
        ans[count] = val + 48; count++;
        len1--;
        len2--;
    }
    while (len1){
        a = num1[((len1)-1)] - 48;
        int val = a - buffer;
        if(val < 0){ 
            val = a + 10 - buffer; 
            buffer = 1; 
        }
        else buffer = 0;
        ans[count] = val + 48; count++;
        len1--;
    }
    if(flg == 2) { 
        ans[count] = '-'; 
        count++; }
}
printf("%s %c %s = ", num1, operator, num2);
for(int i = count; i>=0; i--){ 
     printf("%c", ans[(i-1)]); 
     printf("\n");}
return 0;
}


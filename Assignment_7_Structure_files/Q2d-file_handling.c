#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	// S U M M A R Y - after we get a word we check if it is int, char,float etc and then
	// we count only the commas and semicolons (, and ;)
	// reason each semicolon means we have a variable and comma means +1
	FILE *fptr;
	fptr = fopen("Q2d-file_handling.c", "r");
	char arr[100] = "";
	unsigned int count = 0 , count_variable = 0 , flag = 0;
	char ch = fgetc(fptr);
	while (ch != EOF){
		arr[count] = ch;
		ch = fgetc(fptr);
		if(ch == ' ' || ch == '\n'){
			if(strcmp(arr, "int") == 0 || strcmp(arr, "float") == 0 ||strcmp(arr, "char") == 0) 
			      flag = 1;
			else if(flag && ch == '\n') 
			       flag = 0;
			int n = strlen(arr);
			for(int i = 0; i< n+1; i++) 
			      arr[i] = '\0';
			count = -1;
			ch = fgetc(fptr);
		}
		if(flag && (ch == ',' || ch == ';')) 
		      count_variable++;
	    count++;
	}
	printf("Total variables : %d\n",count_variable);
	return 0;
 }

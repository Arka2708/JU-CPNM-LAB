#include <stdio.h>
int main() {
FILE *fptr;
fptr = fopen("Q2c-file_handling.c", "r");
char ch = fgetc(fptr), prev;
int flg = 0;
// flg is 0 for normal characters
// flg is 1 for single line comments
// flg is 2 for multi line comments
int countx = 0, county = 0;
while (ch != EOF){
	prev = ch;
	ch = fgetc(fptr);
	if(prev == '/'){ 
		if(ch == '/') flg = 1; 
		else if(ch == '*') flg =2; 
	}
	else if(flg == 1 && prev == '\n'){
	    flg = 0; countx--; county++;
	}
	else if(flg == 2 && prev == '*' && ch == '/')
	   flg = 0;
	if(flg == 0) 
	    countx++; 
	else 
	    county++;
	}
	printf("Total normal characters : %d\n", countx);
	printf("Total commented characters : %d\n", county);
	printf("Total characters : %d\n", countx+county);
	float percentage;
	percentage = ((county)*(100.0))/(countx + county);
	printf("Percentage commented characters : %.2f\n", percentage);
	return 0;
}

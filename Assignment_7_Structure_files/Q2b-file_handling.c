#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *ptr, *write_file;
	ptr = fopen("Q2b-file_handling.c", "r");
	write_file = fopen("newcopyCode.c", "w");
	char c = fgetc(ptr);
	char putChar, prev;
	int flag = 1, count = 1;
	
	/* this line needs to be trimmed!
	actually a multi line comment*/
	
	while (c != EOF){
		if(count > 1){
			if(prev == '/' && c == '*') flag = 0;
			if(putChar == '*' && prev == '/'){
				flag = 2;
			}
			putChar = prev;
			if(flag == 1) fputc(putChar, write_file);
			if(flag == 2) flag = 1;
		}
		prev = c;
		c = fgetc(ptr);
		count++;
	}
    return 0;
 }

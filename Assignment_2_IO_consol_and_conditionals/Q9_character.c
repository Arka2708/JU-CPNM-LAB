#include<stdio.h>

int main()
{
   char ch;
   printf("Enter any character: ");
   scanf("%c", &ch);
   if(ch>=65 && ch<=90)
		printf("It's a capital letter.\n\n");
	else if(ch>=48 && ch<=57)
		printf("It's a number.\n\n");
	else if(ch>=97 && ch<=122)
		printf("It's a small letter.\n\n");
	else
		printf("It's a special symbol.\n\n");
  return 0;
}
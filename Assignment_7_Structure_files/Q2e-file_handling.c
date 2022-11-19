#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main(int argc,char *argv[])
{
	char ch;
	FILE *mainfile;
	FILE *copyfile;
	if(argc !=3){
		printf("\nCan not open file for reading…");
		exit(1);
	}
	mainfile = fopen(argv[1],"r");
	copyfile = fopen(argv[2],"w");
	if(mainfile==NULL || copyfile==NULL)
	{
		printf("File opening Error or file not Found");
		exit(1);
	}
	ch=fgetc(mainfile);
	while ((ch!=EOF))
	{
		fputc(ch,copyfile);
		ch = fgetc(mainfile);
	}
	printf("\nFile copied successfully\n");
	fclose(mainfile);
	fclose(copyfile);
	getch();
}
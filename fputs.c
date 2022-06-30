#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("file3.txt","w");
	fputs("Hello! Welcome to SSi Digital",fp);
	fclose(fp);
	getch();
}

#include<stdio.h>
void main()
{
	FILE *fp;
	char text[200];
	fp=fopen("file3.txt","r");
	printf("%s",fgets(text,100,fp));
	fclose(fp);
	getch();
}

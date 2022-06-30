#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("file2.txt","w");
	fputc('a',fp);
	fclose(fp);
	fp=fopen("file2.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	
	fclose(fp);
	
	getch();
}

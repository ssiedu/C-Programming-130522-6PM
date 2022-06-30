#include<stdio.h>
void main()
{
	FILE *fp;
	int len;
	fp=fopen("file4.txt","w+");
	fputs("This is SSi Digital ",fp);
	fseek(fp,8,SEEK_SET);
	fputs("C/C++ Classes",fp);
	fseek(fp,0,SEEK_END);
	len= ftell(fp);
	fclose(fp);
	printf("\n length of file %d bytes ",len);
	getch();
}

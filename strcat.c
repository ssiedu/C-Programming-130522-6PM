#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20];
	char str2[20];
	printf("\n Enter str1 : ");
	gets(str1);
	printf("\n Enter str2 : ");
	gets(str2);
	strcat(str1,str2);
	printf("\n string concatinate : %s ",str1);
	getch();
}

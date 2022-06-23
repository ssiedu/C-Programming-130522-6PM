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
	if(strcmp(str1,str2)==0)
	printf("\n strings are equal ");
	else
	printf("\n Strings are not equal");
	getch();
}

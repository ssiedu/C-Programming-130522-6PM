#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	char str1[20];
	printf("\n Enter string : ");
	gets(str);
	strcpy(str1,str);
	printf("\n str1 is : %s",str1);
	getch();
}

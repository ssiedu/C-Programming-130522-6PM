#include<stdio.h>
#include<string.h>
void main()
{
	char ch[25];
	int len;
	printf("\n Enter string : ");
	gets(ch);
	len = strlen(ch);
	printf("\n length of string : %d",len);
	getch();
	
}

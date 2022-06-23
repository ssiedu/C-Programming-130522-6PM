#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	printf("\n Enter string : ");
	gets(str);
	//printf("\n string upper is : %s",strupr(str));
	printf("\n string upper is : %s",strlwr(str));
	getch();
}

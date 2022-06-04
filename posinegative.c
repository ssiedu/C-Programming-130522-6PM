#include<stdio.h>
void main()
{
	int num;
	printf("\n Enter number : ");
	scanf("%d",&num);
	if(num>0)
	printf("\n Number is positive ");
	else if(num<0)
	printf("\n Number is negative");
	else
	printf("\n Number is Zero ");
	getch();
}

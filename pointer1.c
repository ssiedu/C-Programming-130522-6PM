#include<stdio.h>
void main()
{
	int num=10;
	int *ptr;
	ptr= &num;
	printf("\n value of number : %d",num);
	printf("\n address of num  : %u",&num);
	printf("\n value of ptr    : %u",ptr);
	printf("\n value of ptr    : %d",*ptr);
	getch();
}

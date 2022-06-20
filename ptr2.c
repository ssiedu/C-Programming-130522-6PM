#include<stdio.h>
void main()
{
	int a=6,b=10;
	int *ptr=&a;
	int *ptr1= &b;
	printf("\n address of ptr : %u",ptr);
	printf("\n address of ptr1: %u",ptr1);
	ptr=ptr-ptr1;
	printf("\n new address of ptr : %u",ptr);
	getch();
}

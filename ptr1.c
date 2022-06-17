#include<stdio.h>
void main()
{
	int a=10,b=20;
	int *ptr=&a;
	int *ptr1=&b;
	printf("\n before increment address of ptr :%d",ptr);
		printf("\n before increment address of ptr1 :%d",ptr1);
//	ptr++;
	ptr = ptr-ptr1;
	printf("\n After increment address of ptr : %d",ptr);
	printf("\n After increment address of ptr1 : %d",ptr1);
	getch();
	
}

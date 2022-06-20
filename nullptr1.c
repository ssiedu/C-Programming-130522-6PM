#include<stdio.h>
void main()
{
	int a=10;
	int b=20;
	int *ptr=NULL;
	if(ptr==NULL)
	{
		ptr=&a;
		ptr=&b;
	}
	/*if(ptr==NULL)
	{
		ptr=&b;
	}*/
	printf("\n value of a : %d",a);//10
	printf("\n value of b : %d",b);//20
	printf("\n value of ptr : %d",*ptr);//20//n//10
	getch();
}

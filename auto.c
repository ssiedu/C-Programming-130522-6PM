#include<stdio.h>
int a=20;
void fun();
void main()
{
	  int a=15;
	{
		int a=10;
		printf("\n value of a : %d",a);//10
	}
    fun();
	printf("\n value of a : %d",a);
	getch();
}
void fun()
{
	//int a=23;
	printf("\n value of a : %d",a);
}

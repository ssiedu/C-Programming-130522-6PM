//function without argument and without return value
#include<stdio.h>
void sum();  // function declaration
void main()
{
	sum(); // function calling
	
	getch();
}
void sum()  // function definition
{
	int a,b;
	printf("\n Enter two value : ");
	scanf("%d%d",&a,&b);
	printf("\n Sum is : %d",a+b);
}

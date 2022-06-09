//function with argument and without return value
#include<stdio.h>
void sum(int a, int b);  // function declaration
void main()
{
	int x,y;
	printf("\n Enter two value : ");
	scanf("%d%d",&x,&y);
	sum(x,y); // function calling
	
	getch();
}
void sum(int a, int b)  // function definition
{

	printf("\n sum is : %d",a+b);
}

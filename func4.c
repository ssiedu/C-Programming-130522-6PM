//function with argument and with return value
#include<stdio.h>
int sum(int a, int b);  // function declaration
void main()
{
	int x,y,res;
	printf("\n Enter two value : ");
	scanf("%d%d",&x,&y);
	res=sum(x,y); // function calling
	printf("\n sum is : %d",res);
	getch();
}
int sum(int a, int b)  // function definition
{

	return a+b;
}

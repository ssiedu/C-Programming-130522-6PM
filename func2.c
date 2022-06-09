//function without argument and with return value
#include<stdio.h>
int sum();  // function declaration
void main()
{
	int res;
	res=sum(); // function calling
	printf("\n sum is : %d",res);
	getch();
}
int sum()  // function definition
{
	int a,b,c;
	printf("\n Enter two value : ");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
	
}

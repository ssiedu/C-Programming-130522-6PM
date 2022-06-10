#include<stdio.h>
void swap(int a, int b); // function declaration
void main()
{
	int x,y;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	printf("\n value of x :%d \n value of y:%d",x,y);
	swap(x,y);
	printf("\n\n after swapping value of x :%d \n value of y:%d",x,y);
	getch();
}
void swap(int a, int b)
{
	int temp;
	temp = a;
	a=b;
	b=temp;
	printf("\n value of a :%d \n value of b:%d",a,b);
}

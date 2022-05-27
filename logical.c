#include<stdio.h>
void main()
{
	int a=10,b=5;
	
	printf("\n a is greater than b : %d",((a>=b)&&(a<b)));//1 && 0 //0
	printf("\n a is less than b    : %d",((a>=b)||(a<b)));//1 ||0  //1
	printf("\n a is greater than equal to b : %d ",!(a<=b));//1
	
	getch();
}

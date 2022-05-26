#include<stdio.h>
void main()
{
	int a=10,b=20;
	int c;
	
	
	/*c=a+b;// 30
	//printf("\n add is : %d ",c);//30
	c=a-b;//
	//printf("\n sub is : %d ",c);//-10
	c=a*b;//200
	printf("\n mul is : %d ",c);//200*/
	
	printf("\n Addition is : %d",(a+b));
	printf("\n Substraction is : %d",(a-b));
	printf("\n Multiplication is : %d",(a*b));
	printf("\n Division is : %.2f",((float)a/b));
	printf("\n Modulus is : %d",(a%b));
	getch();
}

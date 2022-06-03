#include<stdio.h>
void main()
{
	int num1,num2;
	printf("Enter num1 and num2 : ");
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
	printf("\n number 1 is greater : %d",num1);
	else
	printf("\n Number 2 is greater : %d",num2);
	getch();
}

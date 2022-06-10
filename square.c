#include<stdio.h>
int square();
void main()
{
	int res;
	res= square();
	printf("\n square is : %d",res);
	getch();
}
int square()
{
	int num;
	printf("\n Enter number :");
	scanf("%d",&num);
	return num*num;
}

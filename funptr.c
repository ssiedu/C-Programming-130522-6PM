#include<stdio.h>
int mul(int a, int b);
void main()
{
	int res;
	int a,b;
	int (*ptr)(int ,int);
	printf("\n Enter the value of a and b : ");
	scanf("%d%d",&a,&b);
	ptr = &mul;
	res = (*ptr)(a,b);
	printf("\n result is : %d",res);
	getch();
}
int mul(int a, int b)
{
	/*int a,b;
	printf("\n Enter the value of a and b : ");
	scanf("%d%d",&a,&b);*/
	return a*b;
}

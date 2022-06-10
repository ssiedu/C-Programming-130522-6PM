#include<stdio.h>
int fact(int n);
void main()
{
	int num,r;
	printf("\n Enter number : ");
	scanf("%d",&num);
	r=fact(num);
	printf("\n factorial : %d",r);
	getch();
}
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);//5*4*3*2*1*1
}

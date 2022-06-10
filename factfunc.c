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
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f = f*i;
	}
	return f;
}

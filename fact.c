#include<stdio.h>
void main()
{
	int num,i,fact=1;
	printf("\n Enter number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact = fact*i;
	}
	printf("\n factorial is : %d",fact);
	getch();
}

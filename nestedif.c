#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter a : ");
	scanf("%d",&a);
	printf("\nEnter b :");
	scanf("%d",&b);
	
	if(a!=b)
	{
		printf("\n a is not equal to b");
		if(a>b)
		{
			printf("\n a is greater than b");
		}
		else
		{
			printf("\n b is greater than a ");
		}
	}
	else
	{
		printf("\n a is equal to b");
	}
	getch();
}

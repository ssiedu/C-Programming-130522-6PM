#include<stdio.h>
void main()
{
	int i,n;
	printf("\n Enter limit : ");
	scanf("%d",&n);
	i=10;
	while(i>=n)
	{
		printf("\t%d",i);
		i--;
	}
	getch();
}

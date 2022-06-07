#include<stdio.h>
void main()
{
	int i,n;
	printf("\n Enter Limit : ");
	scanf("%d",&n);
	printf("\n Natural Numbers : \n");
	for(i=1;i<=n;i++)
	{
		printf("\t%d",i);
	}
	getch();
}

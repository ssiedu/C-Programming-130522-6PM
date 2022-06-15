#include<stdio.h>
void main()
{
	int a[5][5];
	int i,j,r,c;
	printf("\n Enter row size : ");
	scanf("%d",&r);
	printf("\n Enter column size : ");
	scanf("%d",&c);
	printf("\n Enter array elements : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Array Elements : \n\n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n\n\n");
	}
	getch();
}

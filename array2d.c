#include<stdio.h>
void main()
{
	int a[2][3] ;//= {{1,2,3},{4,5,6}};
	int i,j;
	a[0][0]=1;
	a[0][1]=2;
	a[0][2]=3;
	a[1][0]=1;
	a[1][1]=5;
	a[1][2]=8;
	printf("\n Array elements : \n\n\n ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n\n\n");
	}
	getch();
}

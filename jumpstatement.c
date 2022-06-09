#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i==5)
		{
			goto XYZ;//continue;//break;
		}
		printf("\t%d",i);
	}
	printf("\n Sssi digital");
	XYZ : printf("\n We use goto statement");
	getch();
}

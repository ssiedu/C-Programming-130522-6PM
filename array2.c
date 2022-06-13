#include<stdio.h>
void main()
{
	int arr[20];
	int i,n;
	printf("\n How many elements u want to enter : ");
	scanf("%d",&n);
	printf("\n Enter array elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n Array elements :\n");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d]=%d",i,arr[i]);
	}
	getch();
}

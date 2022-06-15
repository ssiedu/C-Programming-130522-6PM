#include<stdio.h>
void main()
{
	int arr[20],i,n;
	printf("\n Enter number of elements : ");
	scanf("%d",&n);
	printf("\n Enter elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[0]<arr[i])
		{
			arr[0]=arr[i];
		}
	}
	printf("\n Largest element in array : %d",arr[0]);
	getch();

}

#include<stdio.h>
void main()
{
	int i;
	int a[5];
	printf("\n Enter Array element : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	/*a[0]=10;
	a[1]=20;
	a[2]=30;
	a[3]=40;
	a[4]=50;*/
	
	printf("\n Elements of array : \n");
	for(i=0;i<5;i++){
		printf("\n a[%d]= %d",i,a[i]);
	}
	
	
	
	/*printf("\n first element : %d",a[0]);
	printf("\n Second element : %d",a[1]);
	printf("\n Third element : %d",a[2]);
	printf("\n fourth element : %d",a[3]);
	printf("\n fifth element : %d",a[4]);*/
	getch();
}

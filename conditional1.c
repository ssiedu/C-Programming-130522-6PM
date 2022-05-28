#include<stdio.h>
void main()
{
	int a,b,max;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	
	max = (a>b)  ? a : b;
	/*     (10>5)  ? 10 : 5*/
	
	printf("\n largest value is : %d",max);
	getch();
	
}

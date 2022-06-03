#include<stdio.h>
void main()
{
	int a,b,c;
	printf("\n Enter first number : ");
	scanf("%d",&a);
	printf("\n Enter second number : ");
	scanf("%d",&b);
	printf("\n Enter third number : ");
	scanf("%d",&c);
	
	if(a>b && a>c)
	printf("\n number first is greater ");
	else if(b>c)
	printf("\n number second is greater ");
	else
	printf("\n number third is greater ");
	getch();
	
	
	
}

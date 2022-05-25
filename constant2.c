#include<stdio.h>
void main()
{
	float area,r;
	const float pi=3.14;
	printf("\n Enter Radius : ");
	scanf("%f",&r);
	area = pi*r*r;
	printf("\n area of circle : %.2f",area);
	getch();
}

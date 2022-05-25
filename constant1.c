#include<stdio.h>
#define pi 3.14
void main()
{
	float area,r;
	printf("\n Enter the radius of circle : ");
	scanf("%f",&r);
	area = pi*r*r;
	printf("\n Area of circle : %.2f",area);
	getch();
}

#include<stdio.h>
void main()
{
	float a,b,sum; 
	
	printf("\n Enter the value of a and b : ");
	scanf("%f%f",&a,&b);
//	printf("\n Enter the value of b : ");
//	scanf("%d",&b);
	
	sum = a+b;// sum = 10+20//sum = 30
	
	printf("\nAddition is  :%.2f",sum);
	getch();
}

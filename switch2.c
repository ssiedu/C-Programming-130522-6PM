#include<stdio.h>
void main()
{
	int a,b,res,ch;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	printf("\n 1.Addition \n 2.Substraction \n 3.Multiplication \n 4. Division ");
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: res=a+b;
				printf("\n add is : %d",res);
				break;
		case 2: res = a-b;
				printf("\n sub is : %d",res);
				break;
		case 3: res = a*b;
				printf("\n Mul is : %d",res);
				break;
		case 4: res = a/b;
				printf("\n Div is : %d",res);
				break;
		default:printf("\n Invalid choice");
				break;		
	}
	getch();
	
}

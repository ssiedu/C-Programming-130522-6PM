#include<stdio.h>
void main()
{
	//int x=5;
	int x =3;
	int y;
	//y = ++x;
	//y = x++;
	//y= x++ + x++;
	//y = --x;
	y= x--;
	printf("\n x : %d",x);//6//6
	printf("\n y : %d",y);//6//5
	getch();
}

#include<stdio.h>
void main()
{
	int num=50;
	int *ptr = &num;
	int **pptr = &ptr;
	int ***ppptr = &pptr;
	int ****pppptr = &ppptr;
	 printf("\n number is : %d ",num);
	 printf("\n ptr value : %d",*ptr);//50
	 printf("\n pptr value : %d",**pptr);//50;
	 printf("\n ppptr value : %d",***ppptr);//50;
	 printf("\n pppptr value : %d",***pppptr);
	 getch();
	
	
	
	 
}

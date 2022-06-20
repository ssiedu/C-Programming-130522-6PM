#include<stdio.h>
void main()
{
	int i;
	float f;
	char c;
	int *iptr=NULL;
	float *fptr = NULL;
	char *cptr = NULL;
	
	iptr = &i;
	i=10;
	printf("\n value of i : %d \n value of iptr : %d",i,*iptr);
	
	fptr = &f;
	f=12.3;
	printf("\n value of f : %.2f \n value of fptr : %.2f",f,*fptr);
	
	cptr = &c;
	c='a';
	printf("\n value of c : %c \n value of cptr : %c",c,*cptr);
	
	
	
	
	
	
	
}

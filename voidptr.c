#include<stdio.h>
void main()
{
	int i=10;
	float f=12.3;
	char c='z';
	void *ptr;
	
	ptr = &i;
	printf("\n integer pointer : %d  %d", i,*(int*)ptr);
	
	ptr= &f;
	printf("\n float pointer : %.2f  %.2f ",f,*(float*)ptr);
	
	ptr = &c;
	printf("\n char pointer : %c  %c ",c,*(char*)ptr);
	
	
	getch();
}

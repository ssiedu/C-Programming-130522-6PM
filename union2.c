#include<stdio.h>
#include<string.h>
union data
{
	int i;
	float f;
	char name[20];
};
void main()
{
	union data d;
	d.i = 101;
	printf("\n integer value :%d",d.i);
	d.f = 34.12;
	printf("\n float value   : %.2f",d.f);
	strcpy(d.name,"Ram");
	

	
	printf("\n char name value:%s",d.name);
	
	getch();
	
}

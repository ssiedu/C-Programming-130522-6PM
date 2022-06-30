#include<stdio.h>
union data
{
	int i;
	float f;
	char c[20];
};
void main()
{
	union data d;
	printf("\n size of union %d bytes",sizeof(d));
	getch();
}

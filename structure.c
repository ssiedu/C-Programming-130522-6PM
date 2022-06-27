#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[25];
	float sal;
}e,e1;
void main()
{
	//struct employee e;
	e.id = 101;
	strcpy(e.name,"Ram");
	e.sal = 45000;
	
	e1.id = 102;
	strcpy(e1.name,"Shyam");
	e1.sal = 47000;
	
	printf("\n Employee id   : %d",e.id);
	printf("\n Employee Name : %s",e.name);
	printf("\n Employee sal  : %.2f",e.sal);
	
	printf("\n Employee id   : %d",e1.id);
	printf("\n Employee Name : %s",e1.name);
	printf("\n Employee sal  : %.2f",e1.sal);
	
	getch();
	
}

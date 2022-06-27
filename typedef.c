#include<stdio.h>
typedef struct employee
{
	int id;
	char name[20];
	float sal;
}e;
void main()
{
	 e emp;
	//struct employee emp;
	printf("\n Enter Employee Id : ");
	scanf("%d",&emp.id);
	printf("\n Enter Employee Name : ");
	scanf("%s",&emp.name);
	printf("\n Enter Employee salary : ");
	scanf("%f",&emp.sal);
	
	
	printf("\n Employee id : %d",emp.id);
	printf("\n Employee Name : %s",emp.name);
	printf("\n Employee Salary : %.2f",emp.sal);
	
	getch();
}

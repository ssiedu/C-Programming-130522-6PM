#include<stdio.h>
struct employee
{
	int id ;
	char name[20];
	float sal;
}emp[3];
void main()
{
	int i;
	printf("\n Enter Employee Details :\n");
	for(i=0;i<3;i++){

	printf("\n Enter Employee Id : ");
	scanf("%d",&emp[i].id);
	printf("\n Enter Employee Name : ");
	scanf("%s",&emp[i].name);
	printf("\n Enter Employee salary : ");
	scanf("%f",&emp[i].sal);
	
    } 
    printf("\n Employee Details : \n");
    for(i=0;i<3;i++)
    {
	printf("\n Detail of emp[%d] :",i+1);
	printf("\n Employee id : %d",emp[i].id);
	printf("\n Employee Name : %s",emp[i].name);
	printf("\n Employee Salary : %.2f",emp[i].sal);
   }
	getch();
}

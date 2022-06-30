#include<stdio.h>
void main()
{
	FILE *fp;
	int id;
	char name[25];
	float salary;
	fp = fopen("empInfo.txt","w");
	if(fp==NULL)
	{
		printf("\n file does not exist");
		return;
	}
	printf("\n Enter Employee Id : ");
	scanf("%d",&id);
	fprintf(fp,"ID : %d\n",id);
	printf("\n Enter Employee Name : ");
	scanf("%s",&name);
	fprintf(fp,"Name : %s\n",name);
	printf("\n Enter Employee Salary : ");
	scanf("%f",&salary);
	fprintf(fp,"Salary : %.2f\n",salary);
	
	fclose(fp);
	getch();
	
	
	
	
	
}

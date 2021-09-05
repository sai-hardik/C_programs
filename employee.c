#include"employee.h"
#include<stdio.h>
void scan_details(employee_t* e, int n)
{
	printf("Enter name, id and basic salary for %d employees",n);
	for(int i = 0 ; i<n ; i++ )
	{
		scanf("%s%d%d",(e+i)->name,&(e+i)->id,&(e+i)->basic_salary);
	}
}
void display_details(const employee_t* e, int n)
{
	printf("Displaying name, id and basic salary for %d employees",n);
	for(int i = 0 ; i<n ; i++ )
	{
		printf("\n%s %d %d",(e+i)->name,(e+i)->id,(e+i)->basic_salary);
	}
}
int total_salary(employee_t* e, int n,int id)
{
	int i,da,hra,tot_salary;
	int check = 0;//flag variable
	for(i=0 ; i<n ; i++)
	{
		if(id == (e+i)->id)
		{
			da = 0.8 * ((e+i)->basic_salary);
			hra = 0.2 * ((e+i)->basic_salary);
			(e+i)->total_salary = da + hra + e[i].basic_salary;
			tot_salary = (e+i)->total_salary;
			check = 1;
		}
	}
	if(check)	
		return tot_salary;
	else 	
		return check;	
}
employee_t max(employee_t* e, int n)
{
	int max = 0;
	employee_t e_max;
	for(int i=0 ;i<n;i++)
	{
		if((e+i)->basic_salary > max)
		{
			max = (e+i)->basic_salary;
			e_max = *(e+i);
		}
	}
	return e_max;	
}


/*
Create a structure which holds various attributes 
(e.g. name, id, basic_salary, DA%, HRA%, total_salary etc.) 
of an employee. Write a program which allows you to scan these 
(except total_salary) attributes for 5 employees. 
The program should support following operations:
    i. Display (total salary of the selected employee)
    ii. Max (find and display name of the employee with maximum basic salary)

Use: 	DA = 80% of Basic
		HRA = 20% of Basic
*/

#include<stdio.h>
#include "employee.h"
/*
void scan_details(employee_t* , int);
void display_details(employee_t* , int);
int total_salary(employee_t* , int, int);
employee_t max(employee_t* , int);
*/
int main()
{
	employee_t e[1000];
	int n,id;
	printf("Enter the number of employees:");
	scanf("%d",&n);
	scan_details(e,n);
	display_details(e,n);
	printf("\nEnter the id of the emp whose total_salary you want:");
	scanf("%d",&id);
	int total = total_salary(e,n,id);
	if(total)
		printf("\nThe total salary of emp %d is %d\n",id,total);
	else
		printf("\nID not found \n");
	employee_t e_max = max(e,n);
	printf("\nThe name of emp with the highest salary is %s",e_max.name);
	return 0;
}









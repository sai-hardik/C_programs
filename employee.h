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
typedef struct employee 
{
	char name[20];
	int id;
	int basic_salary;
	int total_salary;
}employee_t;

void scan_details(employee_t* , int);
void display_details(const employee_t* , int);
int total_salary(employee_t* , int, int);
employee_t max(employee_t* , int);


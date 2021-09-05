//Nested Structures
#include<stdio.h>
//method 1
/*struct dob
{
	int day;
	int month;
	int year;
};
struct student			 
{						 
	int rnum;			 
	char name[20];		
	struct dob d1;
};	*/				
//method 2
struct student			 
{						 
	int rnum;			 
	char name[20];		
	struct dob
	{
		int day;
		int month;
		int year;
	}d1;
};
int main()
{
	struct student s1 = { 1 , "Ann" , {day:2 , month:2 , .year=2000} };
	printf("s1: %d %s %d/%d/%d \n",s1.rnum,s1.name,s1.d1.day,s1.d1.month,s1.d1.year);
	return 0;
}
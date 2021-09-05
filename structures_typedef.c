//typedef: gives a new name for the structure
#include<stdio.h>
/*
struct student			 
{						 
	int rnum;			 
	char name[20];		
	int marks;
};					
//method 1
//typedef struct student S;
typedef struct student student_t;//naming convention
int main()
{
	int a;
	//S s1;
	student_t s1 = {1,"Ann",95};
	struct student s2= {1,"Ann",95};
	printf("struct s1: %d %s %d\n",s1.rnum,s1.name,s1.marks);
	printf("struct s2: %d %s %d\n",s2.rnum,s2.name,s2.marks);
	
	return 0;
}*/
//method 2
typedef struct student			 
{						 
	int rnum;			 
	char name[20];		
	int marks;
}student_t;	

int main()
{
	int a;
	//S s1;
	student_t s1 = {1,"Ann",95};
	struct student s2= {1,"Neeta",95};
	printf("struct s1: %d %s %d\n",s1.rnum,s1.name,s1.marks);
	printf("struct s2: %d %s %d\n",s2.rnum,s2.name,s2.marks);
	return 0;
}
//copy and compare

#include<stdio.h>
#include<string.h>
struct student			 
{						 
	int rnum;			 
	char name[20];		
	int marks;
};					
int main()
{
	struct student s1 = {1,"Ann",95};	
	struct student s2;
	s2 = s1; //copy of the structure var s1
	//new memory loc and : memberwise copy
	//s2.name = "Neeta";//error, array assignment is not allowed
	//strcpy(s2.name, "Neeta");
	printf("struct s1: %d %s %d\n",s1.rnum,s1.name,s1.marks);
	printf("struct s2: %d %s %d\n",s2.rnum,s2.name,s2.marks);
	//compare 2 struct variables
	//only memberwise comparision is allowed
	//if(s1 == s2)
	//if(s1.rnum == s2.rnum)
	if(!strcmp(s1.name,s2.name))
		printf("Variables are equal \n");
	else
		printf("Variables are not equal \n");
	
}
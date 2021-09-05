//Structures
//student details
//char name[10][20]
//int roll_no[10]
//int marks[5]

//user defined data type: can have heterogeneous values
//name : acollection of related info
//one or more elements : data members
//size of the structure: depends on the members and the implementation
//
#include<stdio.h>
//declare a new data type
/*
struct structure_name
{
	data members...
	...
};// ';' is mandatory
*/
//ideally storing it in header files
struct Student	//no memory allocated
{	//data members
	//int roll_no=100;//error
	int roll_no;//4B
	char name[20];//20B
	int marks[5];//4B
}s3,s4={2,"Jane",{95,99}};

int main()
{
	//creating structure variables
	struct Student s1;//memory is allocated ; data mem: undefined
	//printf("Structure Student: %d \n", &s1);
	//accessing data members
	//1. dot operator
	printf("Size of struct Student: %lu\n",sizeof(struct Student));
	printf("s1.roll_no: %d \n",s1.roll_no);
	//Initialize
	s1.roll_no = 12;	
	printf("s1.roll_no: %d \n",s1.roll_no);
	//struct Student s2 = {1,"Neeta",95};
	//struct Student s2 = {1,"Neeta"};//rest of the members get default values
	//struct Student s2 = {"Neeta"};//warning: order of init is important
	struct Student s2 = {.name = "Neeta",marks:{99+1,95}};//designated init 
	struct Student *s5=&s2;//arrow operator to access values
	
	printf("Values of s2: %d %s %d\n",s2.roll_no,s2.name,s2.marks[0]);
	printf("Values of s4: %d %s %d\n",s4.roll_no,s4.name,s4.marks[0]);
	//accessing via pointers to sructure
	printf("Values of s5: %d %s %d\n",s5->roll_no,s5->name,s5->marks[0]);
	printf("Values of s5: %d %s %d\n",(*s5).roll_no,(*s5).name,(*s5).marks[0]);
	
	//s2.marks = s4.marks;//array assignment not allowed
	return 0;
}






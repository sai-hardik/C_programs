#include<stdio.h>
typedef struct student			 
{						 
	int rnum;			 
	char name[20];		
	int marks;
}student_t;	
void display(const struct student *s1)//member wise copy
{
	//s1 is a local variable
	printf("struct s1: %d %s %d\n",s1->rnum,s1->name,s1->marks);
	//s1->rnum = 12;//doesn't change the value in the main function
}
//struct student read(struct student s1)
/*student_t read(student_t s1)
{
	printf("Enter roll_no, name and marks: \n");
	scanf("%d",&s1.rnum);
	scanf("%s",s1.name);
	scanf("%d",&s1.marks);
	return s1;
}*/
void read(student_t *s1)//int *p
{
	printf("Enter roll_no, name and marks: \n");
	scanf("%d",&(s1->rnum));//pointer notation use -> instead of (.)
	scanf("%s",s1->name);
	scanf("%d",&(s1->marks));
}
int main()
{
	struct student s2;
	//s2 = read(s2);//pass by value
	read(&s2);//pass the address to a pointer
	display(&s2);//pass by value
	printf("struct s2: %d %s %d\n",s2.rnum,s2.name,s2.marks);
	return 0;
}
#include<stdio.h>
#include<string.h>
typedef struct student			 
{						 
	int rnum;			 
	char name[20];		
	int marks;
}student_t;
//always define the structure before the function declaration and definiton
void display(const struct student *s1, int n)//member wise copy
{
	//s1 is a local variable
	int i;
	for(i=0;i<n;i++)
		printf("struct s[%d]: %d %s %d\n",i,s1[i].rnum,s1[i].name,s1[i].marks);
}

void read(student_t *s1,int n)//int *p;p[i]
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("Enter roll_no, name and marks for student %d: \n",i+1);
		scanf("%d",&(s1[i].rnum));//pointer notation use -> instead of (.)
		scanf("%s",(*(s1+i)).name);//or (s1+i)->name
		scanf("%d",&(s1[i].marks));
	}
}
int main()
{
	int a[10];
	struct student s[100];//array of structures
	read(s,3);//pass the address to a pointer
	display(s,3);
	//s[2].rnum = 11;
	//strcpy(s[2].name,"Neeta");
	//s[2].marks = 89;
	//printf("struct s2: %d %s %d\n",s[2].rnum,s[2].name,s[2].marks);
	return 0;
}
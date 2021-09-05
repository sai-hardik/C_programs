//pointer  to array of structures
#include <stdio.h>
struct student
{
	int roll_no;
	char name[100];
    int marks;
};
int main()
{
    struct student S[10] = {{1,"Ann",56}, {2,"Jane",40}, {3,"Neeta",67}, {4,"Tom",66}};  //Array of structure variables
    struct student *p = S;
	for(int i = 0;i<4;i++)
	{
		printf("Student Details: \n");
		printf("roll_no: %d \n",(p+i)->roll_no);
		printf("Name: %s \n",(p+i)->name);
		printf("Marks: %d \n",(p+i)->marks);
	}
	//exercise
	int avg = find_avg(S,4);//sum
    return 0;
}

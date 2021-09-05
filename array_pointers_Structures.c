/*Program to swap first and last elements of the array of structures 
using array of pointers and 
display the array of structures using array of pointers.
*/
#include<stdio.h>
struct Sample
{ 
	int a; 
	float b; 
};
void disp(struct Sample **ptr , int n)
//void disp(struct Sample *ptr[] , int n)
{
	for(int i=0 ; i<n ; i++)
		printf("%d %f\n",ptr[i]->a,ptr[i]->b);
}
void display(struct Sample *ptr , int n)
{
	for(int i=0 ; i<n ; i++)
		printf("%d %f\n",(ptr+i)->a,(ptr+i)->b);
}
void swap(struct Sample **ptr1,struct Sample **ptr2)
{
	struct Sample *temp;
	temp = *ptr1;//*ptr1 == &s[0]
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
int main()
{ 
	struct Sample s[]={{2,2.2},{3,3.3},{4,4.4}};
	struct Sample *p[3];
	for(int i = 0; i<3 ; i++)
		p[i] = &s[i];
	printf("Before swap:\n");
	disp(p,3);
	swap(&p[0],&p[2]);//swap the array of structures via 
	//array of pointers to structure
	printf("\nAfter swap:\n");
	disp(p,3);
	printf("\nAfter swap:\n");
	display(s,3);
	return 0;
}

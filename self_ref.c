struct Sample
{
	int a;
	//struct Sample p;//Not allowed
	struct Sample *p;//Not allowed
};//self-referential structure

#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct Sample s;
	s.a = 100;
	s.p = &(s);
	printf("%d %d %d",s.a,s.p->a,s.p->p->a);
	
	
	return 0;

}
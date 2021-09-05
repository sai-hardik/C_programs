#include<stdio.h>
int main()
{
	char* p = "pes";
	printf("before change %s\n",p);
	p[1] = 'E';
	printf("after change %s\n",p);
	return 0;
	
}
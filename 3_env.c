#include<stdio.h>
#include<stdlib.h>
int main()
{
	extern char** environ;  
	char **p = environ;
	int i = 0;
	while((*p)  !=  NULL)
	{
		printf("%d %s\n", i, *p);
		p++;
		i++;		
	}	
	// adding a new env variable
	putenv("HOME=Neeta");
	char **p1 = environ;
	i = 0;
	while((*p1)!= NULL)
	{
		printf("%d %s\n",i,*p1);
		i++;p1++;
	}
	return 0;
}

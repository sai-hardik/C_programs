//optional
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *p = getenv("PATH");
	if(p==NULL)	
		printf("NOT AVAILABLE\n");
	else
	{
		
		// updating the existing PATH
		printf("before setting %s\n",p);
		strcat(p,";.");   // : used as seperator in ubuntu
		//putenv takes the string in the form of name=value
		char path_v[100000];
		strcpy(path_v,"PATH =");
		strcat(path_v,p);
		putenv(path_v);  
		p = getenv("PATH");
		printf("\n\nafter setting %s\n",p);
		
		//adding new env variable
		/*
		putenv("HOME=Neeta");
		p = getenv("HOME");
		printf("home is %s",p);
		*/
		
	}
	return 0;
}

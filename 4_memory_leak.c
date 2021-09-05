#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p = (int*)malloc(sizeof(int));
	*p = 200;
	printf("Initially p is pointing to %d\n",*p);
	
	p = (int*)malloc(sizeof(int));
	*p = 300;
	printf("Then p is pointing to %d\n",*p);
	
	p = (int*)malloc(sizeof(int));
	*p = 400;
	printf("Then p is pointing to %d\n",*p);
	
	return 0;
}
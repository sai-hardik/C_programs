#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p = (int*)malloc(sizeof(int));
	*p = 200;
	printf("before free p points to %d\n",*p) ;
	free(p);
	printf("after free p points to %d\n",*p); //undefined behavior
	p = NULL;
	printf("after p is NULL, it points to %d\n",*p);// code crash for sure
	return 0;
	
}
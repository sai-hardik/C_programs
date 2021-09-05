//Dynamic Memory Allocation - DMA
//free
#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
	int *p;
	p = (int*)malloc(sizeof(int));
	*p = 20;
	int *q = p;
	free(q);
	printf("%d",*p); //garbage
	q = NULL;//NULL ptr
	printf("%d",*p); //garbage:dangling ptr
	p=NULL;
	printf("%d",*p);//crash
	*/
	/*
	int *p;
	p = (int*)malloc(sizeof(int));
	*p = 30;
	p = (int*)malloc(sizeof(int));
	*p = 40;
	printf("P: %d",*p);
	free(p);
	free(p);//undefined behavior
	*/
	//double ptr
	//int (*b)[3];
	int **p;//double pointer
	int *q;
	int a = 10;
	q = &a;
	p = &q;
	printf("value: %d",**p);
	
	return 0;
}
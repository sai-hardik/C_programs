//Dynamic Memory Allocation - DMA
#include <stdio.h>
#include<stdlib.h>
int main()
{
	/*
	//int *p = (int*)malloc(5);//5B
	int a = (int)4.0;
	int *p = (int*)malloc(sizeof(int));//4B
	printf("p: %p \n",p);//address at heap
	*p = 20;//init the value
	printf("*p: %d \n",*p);
	free(p);
	*/
	//array
	int n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);//4
	int *p1 = (int*)malloc(n * sizeof(int));//16B
	//returns an uninitialized block of memory
	if(p1 == NULL)
		printf("malloc not successful\n");
	else
	{
		printf("Enter the elements of the array:\n");
		for(int i = 0 ; i<n ; i++)
		{
			printf("i:%d\n ",i);
			scanf("%d",(p1+i));//&p1[i]
		}
		printf("\nthe elements of the array are:\n");
		for(int i = 0 ; i<n ; i++)
			printf("%d ",*(p1+i));//p1[i]
	}
	//release memory
	free(p1);//doesn't return NULL
	//p1 is a dangling pointer
	printf("\npointer p1: %d",*p1);//undefined behavior
	int *q = NULL;
	printf("\n %d",*q);//dereference a NULL ptr : crash


	
	return 0;
}
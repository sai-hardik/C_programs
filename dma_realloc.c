//Dynamic Memory Allocation - DMA
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *p = (int*) calloc(3,sizeof(int));
	printf("address of p points to:%d \n",p);
	if(p == NULL)
		printf("calloc was not successful\n");
	else
	{
		printf("The elements are:\n");
		for(int i = 0 ; i<3 ; i++)
			printf("%d ",p[i]);//pointer notataion: *(p+i)
	}
	//int *q = (int*) realloc(p,20*3);//increased the size
	//int *q = (int*) realloc(p,2*sizeof(int));//decreased the size
	int *q = (int*) realloc(p,0);//acts like free
	printf("\naddress of q points to:%d \n",q);
	if(q == NULL)
		printf("calloc was not successful\n");
	else
	{
		printf("The elements are:\n");
		for(int i = 0 ; i<3 ; i++)
			printf("%d ",q[i]);//pointer notataion: *(q+i)
	}
	
	free(p);
	return 0;
}
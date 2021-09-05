//Dynamic Memory Allocation - DMA
//calloc : contiguous memory allocation
// used for allocating mem location for arrays
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *p = (int*) calloc(3,sizeof(int));
	if(p == NULL)
		printf("calloc was not successful\n");
	else
	{
		printf("Enter elements:\n");
		for(int i = 0 ; i<3 ; i++)
			scanf("%d",&p[i]);//pointer notataion: (p+i)
		printf("The elements are:\n");
		for(int i = 0 ; i<3 ; i++)
			printf("%d ",p[i]);//pointer notataion: *(p+i)
	}
	free(p);//can only be used on ptr returned by the DMA functions
	
	return 0;
}
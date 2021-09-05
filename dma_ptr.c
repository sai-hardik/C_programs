//Dynamic Memory Allocation - DMA
#include <stdio.h>
int main()
{
	/*int *p;
	
	printf("&p: %p\n",&p);
	printf("p: %p\n",p);
	printf("*p: %p\n",*p);
	*/
	int *p;
	int a = 10;
	p = &a;
	printf("&p: %p\n",&p);
	printf("p: %p %p\n",p,&a);
	printf("*p: %d %d\n",*p,a);
	
	return 0;
}
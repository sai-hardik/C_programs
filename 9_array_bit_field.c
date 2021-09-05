//optional
// Array of bit fields is not allowed. 

#include<stdio.h>
struct Status
{
	unsigned int bin1[10]:4;	// invalid type
};
int main()
{
	printf("Size of structure is %lu\n",sizeof(struct Status));			
	return 0;
}
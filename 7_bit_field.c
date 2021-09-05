//Must demo code
#include<stdio.h>
struct Status
{
	unsigned int bin1:4;		// 4 bits is allocated for bin1. 0 to 15, any number can be used.
	unsigned int bin2:2;		// 2 bits allocated for bin2. 0 to 3, any number can be used
	
	
};
int main()
{
	printf("Size of structure is %lu\n",sizeof(struct Status));		// again 4 bytes
	struct Status s1;
	s1.bin1=-7;				// it is unsigned. but sign is given while assigning
	s1.bin2=2;
	printf("%d %d",s1.bin1,s1.bin2);		// 9 2	
	return 0;
}
// optional
#include<stdio.h>
struct Status
{
	int bin1:4;		// one bit is used for representing the sign. Another 3 bits for data
	unsigned int bin2:2;		// 2 bits allocated for bin2. 0 to 3, any number can be used
}s2={2,5};
int main()
{
	printf("Size of structure is %lu\n",sizeof(struct Status));		// again 4 bytes
	struct Status s1;
	s1.bin1=-7;		// change this to -8 and check the value	
//change to -9 and check value	
	s1.bin2=2;
	printf("%d %d\n",s1.bin1,s1.bin2);		// -7 2	
	
	printf("%d %d",s2.bin1,s2.bin2);
	return 0;
}
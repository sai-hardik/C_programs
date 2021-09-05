#include<stdio.h>
//must demo code
struct Status
{
	unsigned int bin1:1;		// 1 bit is allocated for bin1. only two digits can be stored 0 and 1.
	unsigned int bin2:1;
	
	// if it is signed int bin1:1   or int bin1:1,
	// one bit is used to represent the sign
};
int main()
{
	printf("Size of structure is %lu\n",sizeof(struct Status));		// 4 bytes
	struct Status s;
	printf("enter the number");
	//scanf("%d",&s.bin1);		// Error
	// We cannot access the address of bit - field. system is byte addressable
	return 0;
}
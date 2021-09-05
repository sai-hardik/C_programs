//optional
//Valid arithmetic operators are +, - * and / and %
#include<stdio.h>
enum months
{
	jan,feb,mar,apr,may,jun,july,aug,sep,oct,nov,dec
	
};

int main()
{
	printf("%d\n",mar-jan);		// valid
	printf("%d\n",mar*jan);		// valid
	printf("%d\n",mar&&feb);		// valid
	//mar++;		//error		: mar is a constant
	//printf("after incrementing %d\n",mar);			// error
	 enum months m=feb;
	 m=(enum months)(m + jan);	// m can be changed. m is a variable of type enum months.
	 // But all constants in enum cannot be changed its value
	printf("m, after incrementing %d\n",m);			
	
	
	for(enum months i=jan;i<=dec;i++)		// loop to iterate through all constants in enum
	{
		printf("%d\n", i);
	}
	return 0;
}
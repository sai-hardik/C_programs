//optional. already demoed in 2_enum.c
#include<stdio.h>
enum months
{
	jan,feb=11,mar,apr,may=23,jun,july
};
int main()
{
	enum months m;
	//feb=10;		// error
	printf("%d",feb);		// no error		
	// we can access it directly
	return 0;
}
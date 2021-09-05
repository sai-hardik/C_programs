
//The value assigned to enum names must be some integral constant, 
//i.e., the value must be in range from minimum possible integer value to maximum possible integer value.
// Results in Error: overflow in enumeration values
#include<limits.h>
#include<stdio.h>
enum examples
{
	jan=1,feb,mar
	//abc = INT_MAX//, def,cdt
	// INT_MAX is defined in limits.h
	// def must get INT_MAX+1 value which is an error
	// delete def and cdt and compile and run again
};
enum example2
{
	xyz,abc
};

int main()
{
	enum examples apr=abc;//both are integers
	//e=abc;//enum const are rvalue
	int abc;//int var are lvalue
	//scanf("%d",&e);
	// + - * / %
	//jan = 2;
	//printf("%d\n",e+feb);
	printf("%d",feb);
	int ch = feb;
	switch(ch)
	{
		case feb:printf("feb");
	}
	
}
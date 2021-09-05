//optional
// This code results in Error: enumerator value for 'abc' is not an integer
#include<stdio.h>
enum examples
{
	//abc=3.5, bef			// Value is not an integer constant
	abc="Hello", bef		// Value is not an integer constant	
	
};

int main()
{
	enum examples e1;
	
	return 0;
}
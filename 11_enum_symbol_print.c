//optional
//One of the short comings of Enumerated Types is 
//that they don't print nicely. 
//To print the "String"(symbol) associated with the defined enumerated value, you must use the following cumbersome code
#include<stdio.h>
enum example1
{
	abc=123, bef=345,cdt=555
};
void printing(enum example1 e1);
int main()
{
	enum example1 e1;
	// how to print abc, bef and cdt based on user choice
	printf("enter the number");
	scanf("%d",&e1); //enter any number
	printing(e1);		// user defined function to print the symbol name
	return 0;
}
void printing(enum example1 e1)
{
	switch(e1)
	{
		case abc:printf("abc");break;
		case bef:printf("bef");break;
		case cdt:printf("cdt");break;
		default:printf("no symbol in enum with this value");break;
	}
}
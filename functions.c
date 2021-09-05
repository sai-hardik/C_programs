//Functions
#include<stdio.h>
//no function overloading or overriding
//output:return value : input:parameters
//int sum(int,int);//correct//declartion//prototype
int sum(int x,float y);//need not match the names in the definition
//int sum(int x,float y);//error://types must match that of the definition

int mul(int a,int b)//defn+declartion
{
	int s;
	s=a*b;
	return s;//return a+b;
}
int main() 
{ 
	printf("Sum of 2 numbers: %d",sum(3,4));//call
	printf("\nmultiplication of 2 numbers: %d",mul(3,4));//call
	return 0;//status of the execution:error codes
}
//function names = identifiers
//definition: declaration is mandatory
int sum(int a,int b)
{
	int s;
	s=a+b;
	return s;//return a+b;
}


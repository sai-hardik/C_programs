//Functions
#include<stdio.h>
int sum(int,int);//need not match the names in the definition

//paramters: always variables: function definition
//arguments: actual values: function call: expressions

void message()//returns nothing:accepts nothing
{
	printf("\nTo C or not to C");
}
int value(float a)//implicitly type cast to the return type
{
	return a;
}
int mul(int a,int b)//defn+declartion
{
	int s;
	s=a*b;
	return s;//return a+b;
}
/*
int f1(int x, int)//error
{
	return x;
}
int f2(int a,b)//error
{
	return a+b;
}*/
int f3()//valid function
{}

int main() 
{ 
	printf("Sum of 2 numbers: %d",sum(3,4));//call//argument:3 and 4
	printf("\nmultiplication of 2 numbers: %d",mul(3,4));//call
	int x;
	//x = value(1.5);
	x = value(15);//ok : cast it to float
	printf("\nValue is %d", x);
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


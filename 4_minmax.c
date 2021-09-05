//min and max of 2 values
#include<stdio.h>
int minimum(int,int);
int maximum(int x,int y);
int main()
{
	int a,b;
	printf("Enter 2 values: ");
	scanf("%d%d",&a,&b);
	int min,max;
	min = minimum(a,b);
	max = maximum(a,b);
	printf("Min: %d \t Max: %d \n",min,max);
	return 0;
}
int minimum(int a,int b)
{
	return (a<b) ? a : b ;
}
int maximum(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
//boolean : return 0 or 1
//	even or odd
//	armstrong number or not
//	prime or not
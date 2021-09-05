/*

//Recursion: function calls itself
//	base contition:	 when to stop the recursion
#include<stdio.h>
void rec(int i);
int main()
{
	printf("From main function \n");
	rec(1);
	return 0;
}
void rec(int i)
{
	printf("Winding Phase: level=%d \n", i);
	if(i<3)
		rec(i+1);
	printf("UnWinding Phase: level=%d \n", i);
}
//infinite recursion
#include<stdio.h>
int main()
{
	printf("From main function \n");
	main();
	return 0;
}

//factorial of a number
// 5! = 5*4*3*2*1
// 5 * 4!
//	   4 * 3!
//		   3 * 2!
//			   2 * 1!
//				   1 * 0!
//					   1
// factorial(n) = > n * factorial(n-1) //recursive relation
// base condition : n == 0 : return 1;
#include<stdio.h>
int fact(int n);
int main()
{
	int n,f;
	printf("Enter a number to calculate its factorial:");
	scanf("%d",&n);
	f = fact(n);
	printf("Factorial of %d is %d\n",n,f);
	return 0;
}
int fact(int num)
{
	if(num==0)//base condition
		return 1;
	else
		return num*fact(num-1);//recursive relation
}

//Exercise:
//sum of n numbers: 1 - n


//count the number of digits in a number
// 643 : 3
#include<stdio.h>
int len(int); // prototype
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Length of %d is %d \n",n, len(n));
	return 0;
}
int len(int n)
{
	if(n==0)
		return 0;
	else
		return 1+len(n/10);
}


//output of the program
#include<stdio.h>
int what(int n)
{
	if(n==0) return 0;
	else 
		return (n%2)+10*what(n/2);
}
int main()
{
	printf("%d",what(5));
	return 0;
}

////////

#include<stdio.h>
int what2_v1(int n);//interface:what
int what2_v2(int n);
int main()
{
	int n = 16;//10000
	printf("%d",what2_v2(n));
	return 0;
}
int what2_v2(int n)//implementation:how
{
	if(!n) return 0;
	else if (!(n%2)) 
		return what2_v2(n/2);
	else
		return 1+what2_v2(n/2);
}
int what2_v1(int n)
{
	if(n==0) return 0;
	else return (n&1)+ what2_v1(n>>1);
}
*/




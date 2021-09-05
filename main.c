#include<stdio.h>
#include "palin.h"
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(isPalin(n))
		printf("%d is a palindrome\n",n);
	else
		printf("%d is not a palindrome\n",n);
	return 0;
}
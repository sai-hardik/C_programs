//fib
#include<stdio.h>
int main()
{
	int a[10],n,i;
	printf("enter the no of series\n");
	scanf("%d",&n);
	a[0]=0,a[1]=1;
	for(i=2;i<n;i++)
	{
		a[i]=a[i-2]+a[i-1];
	}
	printf("-----------fibonacci series------------\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return(0);
}
	
	
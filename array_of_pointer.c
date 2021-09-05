#include<stdio.h>
//print the array of elements using array of pointers.
int main()
{
	int a[5] = {2,3,4,6,7};
	for(int i = 0;i<5;i++)
		printf("%d\t",a[i]);
	
	//array of pointers to each element of a 
	int *p[5];//array of pointers
	//p[0] = &a[0];
	for(int i = 0; i< 5 ; i++)
		p[i] = &a[i];
	//display values of a using p
	printf("\nDisplay using array of pointers\n");
	for(int i = 0;i<5;i++)
		printf("%d\t",*p[i]);
	return 0;
}
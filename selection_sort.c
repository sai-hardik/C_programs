//Selection sort
//split the list into ordered and unordered parts
//each iteration: choose the smallest element from the unordered parts
//move the smallest element to the beginning of the unorderedlist
#include<stdio.h>
void read(int a[],int n)
{
	printf("Enter %d elements into the array:\n",n);
	for(int i = 0 ; i<n ; i++)
		scanf("%d",&a[i]);
}
void display(int a[],int n)
{
	printf("Elements are:\n");
	for(int i = 0 ; i<n ; i++)
		printf("%d ",a[i]);
}
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sort(int a[],int n)
{
	int i,min,uo;
	for(uo=0;uo<n-1;uo++)//iterates through the unordered list
	{
		min = uo;
		for(i = uo+1 ; i<n ; i++)//used to find the smallest element
		{
			if(a[i]<a[min])
				min = i;
		}
		if(min != uo)
			swap(&a[min],&a[uo]);
	}
}

int main()
{
	int a[10]={0};
	int n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	read(a,n);
	printf("Before sort:\n");
	display(a,n);
	sort(a,n);
	printf("\nAfter sort:\n");
	display(a,n);
	return 0;
}
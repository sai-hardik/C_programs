//2D array
//pointer represenation
#include<stdio.h>
int main()
{	//arr[rows][columns]
	int i,j;
	int arr[3][3]= {11,22,33,44,55,66,77,88,99};
	//base address of an array
	printf("base address: %d \n",arr);
	printf("address *arr: %d \n",*arr);//base address: 6422260
	printf("value arr+1	: %d \n", (arr+1));//address of row2:6422272
	printf("value *(arr+1)	: %d \n", *(arr+1));//address of row2:6422272
	printf("value *(arr+1)+2: %d \n", *(arr+1)+2);//address of [1][2] 66:6422280
	printf("value *(*(arr+1)+2): %d \n", *(*(arr+1)+2));//66
	printf("value *(*(arr+0)+2): %d \n", *(*(arr+0)+2));//33
	//printf("value (arr++): %d \n", (arr++));//can't increment a constant
	//printf("%d \n", 7++);//can't increment a constant
	int arr1[2][3];
	//arr1 = {};
	printf("Enter the Elements: \n");
	for(i=0 ; i<2 ; i++)
		for(j=0 ; j<3 ; j++)
			//scanf("%d",&arr1[i][j]);
			scanf("%d",(*(arr1+i))+j);//same as above
		
	for(i=0 ; i<2 ; i++)//rows
		for(j=0 ; j<3 ; j++)//columns
			//printf("%d, ",arr1[i][j]);
			printf("%d, ",*(*(arr1+i)+j));//same as above
	printf("\n");
	//int a;//one int
	//int a[10];//array of 10 int
	//int *p;//single address
	int (*p)[3];//array of pointers: each pointer an array of 3 elements
	p = arr1;//2*3 = 6 elements
	printf("\n size of arr1: %d",sizeof(arr1));//24
	printf("\n size of p: %d",sizeof(p));
	printf("\n size of *p: %d\n",sizeof(*p));
	
	printf("\nValue of p[1][2]: %d \n",*(*(p+1)+2));//6
	printf("Value of *(*(p++)+3): %d \n",*(*(p++)+3));//4
	printf("Value of *(*(p++)): %d \n",*(*(p)));//4
	return 0;
}
//multidimentional array
#include<stdio.h>
int main()
{	//arr[rows][columns]
	int i,j;
	int arr1[3][2];//declaration and definition
	//int arr[3][2]= {{11,22},{33,44},{55,66}};
	//int arr[3][2]= {11,22,33,44,55,66};
	//row major order
	//int arr[3][2]= {11,22,33,44,55};//partial initialization
	//int arr[3][2]= {{11},{33,44},{55}};//partial initialization
	//int arr[][]= {11,22,33,44,55,66};//error:col is a must
	//int arr[][3]= {11,22,33,44,55};
	int arr[][3]= {10,[1][1]=11,22,33,44};//designated initialization
	int arr2[3][3]={{[1]=1},{33,44},{55,66}};//designated initialization
	int size = sizeof(arr);//16
	int rows = sizeof(arr)/(3*sizeof(int));//sizeof(arr[0])
	printf("size: %d\n",size);
	printf("size of arr[0]: %d\n",sizeof(arr[0]));
	printf("rows: %d\n",rows);
	//printf("%d",arr[2][0]);
	for(i=0 ; i<2 ; i++)//rows
		for(j=0 ; j<3 ; j++)//columns
			printf("%d, ",arr[i][j]);
	return 0;
}
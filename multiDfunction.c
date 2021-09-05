//2D array
//passing 2D array to functions
#include<stdio.h>
void read(int col; int a[][col] , int row, int col);
void display(int col; int a[][col] , int row, int col);
int main()
{	//arr[rows][columns]
	int row,col;
	printf("Enter the number of rows and columns: ");
	scanf("%d%d",&row,&col);
	int arr[row][row];//6 elements
	//int arr1[][];//error
	
	read(arr,row,col);
	display(arr,row,col);
	int n = 3;
	return 0;
}
//void read(int a[][] , int row, int col)//error:need the col size
//void read(int a[][3] , int row, int col)//work fine: gives a warning
//void read(int a[][col] , int row, int col)//error
//void read(int row, int col, int a[][col])//works:change the client program

//forward declaration of parameters
//void read(int col;int a[][col],int row, int col)//works:
void read(int col;int (*a)[col],int row, int col)//works:pointer notation
{
	printf("Enter %d elements:",row*col);
	for(int i = 0 ; i<row ; i++)
		for(int j = 0; j< col;j++)
			scanf("%d", &a[i][j]);
}
void display(int col;int a[][col],int row, int col)
{
	printf("The elements are:\n");
	for(int i = 0 ; i<row ; i++)
	{
		for(int j = 0; j< col;j++)
			printf("%d	", a[i][j]);
		printf("\n");
	}
	
}
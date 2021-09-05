// Binary search:
//half-interval search
/* works on sorted collection of elements
 10 12 33 39 44
key = 12
 10 12 
 */

//Linear search: 10 39 12 33 44
// key = 33
#include<stdio.h>
int binarysearch(int a[],int low,int high,int key)
{	/* binary search - iterative solution
	int pos = -1;
	int found = 0;
	while(low<=high && found==0)
	{
		int mid = (low+high)/2;
		if(a[mid]==key)
		{
			pos = mid; found = 1;
		}
		else if(key < a[mid])
			high = mid-1;
		else
			low = mid+1;
	}
	return pos;	*/
	/* binary search - recursive solution*/
	if(low>high)
		return -1;
	else
	{
		int mid = (low+high)/2;
		if(a[mid]==key)
			return mid;
		else if(key<a[mid])
			return binarySearch(a,low,mid-1,key);
		else
			return binarySearch(a,mid+1,high,key);
	}
}
int main()
{
	int a[10];
	int key, n , i;
	FILE *fp = fopen("numbers.txt","r");
	printf("Enter the number of values to be read from the file: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		fscanf(fp,"%d",&a[i]);
		//scanf("%d",&a[i]);
	fclose(fp);
	//binary search
	printf("Enter the value to be searched: ");
	scanf("%d",&key);
	int pos = binarySearch(a,0,n-1,key);
	if(pos == -1)
		printf("Element was not found\n");
	else
		printf("Element found at %d\n",pos);
	return 0;	
}





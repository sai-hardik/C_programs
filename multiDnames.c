#array of names
#include<stdio.h>
int main()
{
	//char name[20]; // can store one name with max 20 characters including '\0' Character
	
	char names[200][20];
	int n;
	printf("how many names u want to store\n");	
	scanf("%d",&n);
	
	int i;
	printf("enter %d names\n",n);
	for(i = 0;i < n; i++)
	{
		scanf("%[^\n]s",names[i]);
		fflush(stdin);
	}
	printf("u entered below names\n");
	for(i = 0;i < n; i++)
	{
		printf("%s\n",names[i]);
	}
	return 0;
}
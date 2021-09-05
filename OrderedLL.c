//Ordererd List
typedef struct node{
	int data;
	struct node *link;
}node_t;

node_t *head;//global pointer variable

void display(node_t* p);
void freelist(node_t* p);
void insert(int element);

#include<stdio.h>
#include<stdlib.h>
int main()
{	
	head=NULL;
	int n,element;
	printf("How many nodes\n");
	scanf("%d",&n); 			//4
	for (int i=0;i<n;i++) 		//4 times
	{
		printf("Enter the data for the node\n");
		scanf("%d",&element); 		// 2 1 4 3
		insert(element); // function call
		display(head);
	}
	return 0;
}
void display(node_t *p)
{
	printf("The elements in the list are:\n");
	while(p != NULL)
	{
		printf("%d \t",p->data);
		p = p->link;
	}
}
void freelist(node_t *q)
{
	printf("\nDeleting the List:\n");
	node_t *r;
	while(q != NULL)
	{
		printf("%d is deleted\n",q->data);
		r = q->link;
		free(q);
		q = r;
	}	
}

//2 1 4 3
//1 2 3 4
void insert(int element)
{
	node_t *temp = (node_t*)malloc(sizeof(node_t));
	temp->data = element;
	temp->link = NULL;
	//if list is empty
	if(head == NULL ||element < head->data)
	{	//adding the 1st node//inserting to the beginning
		temp->link = head;
		head = temp;		
	}
	else
	{
		node_t *present = head;
		node_t *previous = NULL;
		while(present!=NULL && present->data<element)
		{
			previous=present;
			present = present->link;
		}
		temp->link = present;
		previous->link = temp;
	}	
}








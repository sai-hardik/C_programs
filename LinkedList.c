//Linked list
//DS - zero or more nodes
//node - data ; link(ptr)
typedef struct node{
	int data;
	struct node *link;
}node_t;

void display(node_t* p);
void freelist(node_t* p);
#include<stdio.h>
#include<stdlib.h>
int main()
{
	node_t *head;
	head = (node_t*)malloc(sizeof(node_t));//8B
	head->data = 10;
	head->link = (node_t*)malloc(sizeof(node_t));//8B
	head->link->data = 20;
	head->link->link = (node_t*)malloc(sizeof(node_t));//8B
	head->link->link->data = 30;
	head->link->link->link = NULL;
	display(head);
	freelist(head);
	//free(head);//only delete the 1st node
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




typedef struct node
{
	int priority;
	char name[20];
	struct node *link;
}NODE;

NODE *front;

void enqueue(char item[],int priority);
void dequeue();
void display();
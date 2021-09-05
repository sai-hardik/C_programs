/*
Create a structure called event with required data members. 
Create an list of events. Read and display list of events.
Problems to be solved based on above structures:
	1) Count the number of events in any month specified by the user.
	2) Ensure the events are stored in order of their dates.
Optional: Try handling invalid dates
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct event
{
	char name[50];
	int day,month;
	struct event* link;
}NODE;

NODE *front;//global ptr var

void enqueue(char item[],int day,int month)
{
	NODE *tmp;
	tmp = (NODE *)malloc(sizeof(NODE));
	strcpy(tmp->name,item);//tmp->name = item // incorrect:error
	tmp->day = day;
	tmp->month = month;
	if( front == NULL || day < front->day && month < front->month )
	{//add node to front of the list
		tmp->link = front;
		front = tmp;
	}
	else
	{
		NODE *pres = front;
		NODE *prev = NULL;
		while( pres!= NULL && pres->day <= day && pres->month <= month )
			{
				prev=pres;
		        pres=pres->link;
			}
		tmp->link = pres;
		prev->link = tmp;
	}
}

void display()
{
	NODE *ptr;
	ptr = front;
	printf("\n\n------------\n");
	if(front == NULL)
		printf("No events scheduled\n");
	else
	{	
		printf("Events are:\n");
		printf("Name\tDate\n");
		while(ptr != NULL)
		{
			printf("%s\t%d\\%d\n",ptr->name,ptr->day,ptr->month);
			ptr = ptr->link;
		}
	}
	printf("------------\n");
}
int count_event(int month)
{
	NODE *ptr;
	ptr = front;
	int count = 0;
	if(front == NULL)
		printf("No event scheduled\n");
	else
	{	//1 1 3 3 3 4 4 4 4 6 6 6 6 7 7 8 8 8 9 9 9 12 12 12
		while(ptr != NULL)//while(ptr != NULL && ptr->month <= month )
		{
			if(month == ptr->month)
				count++;
			ptr = ptr->link;
		}
	}
	return count;
}
int main()
{
	front = NULL;
	int choice,day,month;
 	char item[20];//name of the event
	do
	{
		printf("\n------------\n1.Add Event\n");
		printf("2.Count events of a month\n");
		printf("3.Display\n");
		printf("4.Quit\n");
		printf("Enter your choice : ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("\nInput the Event to be added in the queue : ");
				scanf("%s",item);//name
				printf("Enter its date as dd/mm: ");
				scanf("%d/%d",&day,&month);// 12/2
				enqueue(item,day,month);
				break;
			case 2:
				printf("\n------------\nInput the month to see the number of events : ");
				scanf("%d",&month);
				int count = count_event(month);
				if(count==0) printf("No events in this month\n");
				else printf("There are %d events this month\n",count);
				break;
			case 3:
				display();
				break;
			case 4:exit(0);
				//break;
			default :
				printf("Wrong choice\n");
		}
	}while(choice!=4);

	return 0;
}
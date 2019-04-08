#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>

#define MAX_NUM_ELEMENTS 5

int queue[MAX_NUM_ELEMENTS], element, rear=-1, front=-1;

void enqueue(void);
void dequeue(void);
void display(void);

void main(void)
{
	int choice;
	//clrscr();

	do
	{
		printf("\r\n*****	MENU	*****\r\n");
		printf("Enter your choice\r\n");	
		printf("1. Enqueue to insert an element\r\n");
		printf("2. Dequeue to delete an element\r\n");
		printf("3. Display to display the elements of the queue\r\n");
		printf("4. Exit(0) to exit \r\n");

		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Wrong choice entered, please choose as per the above menu\r\n");
		}
	}
	while(choice!=4);
}

void enqueue(void)
{
	if( ((front==0) && (rear==MAX_NUM_ELEMENTS-1)) || (front==rear+1))
	{
		printf("\r\nThe queue is full / overflow");
	}
	else
	{
		printf("Enter the element to be added into the queue : ");
		scanf("%d", &element);

		if(front==-1)
		{
			front = 0;
			rear = 0;
		}
		else if(rear==MAX_NUM_ELEMENTS-1)
		{
			rear = 0;
		}
		else
		{
			rear = rear+1;
		}
		queue[rear] = element;
	}
}

void display(void)
{
	int i;

	printf("\r\nThe elements of the circular queue are : ");

	if(front>rear)
	{
		for(i=front; i>=MAX_NUM_ELEMENTS-1; i++)
		{
			printf("%d\t", queue[i]);
		}

		for(i=0; i<=rear; i++)
		{
			printf("%d\t", queue[i]);
		}
	}
	else
	{
		for(i=front; i<=rear; i++)
		{
			printf("%d\t", queue[i]);
		}
	}
}


void dequeue(void)
{
	if(front == -1)
	{
		printf("\r\nThe queue is Empty or Underflow. Can not delete anymore elements.");
	}
	else
	{
		element = queue[front];

		if(front == rear)
		{
			front = -1;
			rear = -1;
		}
		else if(front==MAX_NUM_ELEMENTS-1)
		{
			front = 0;
		}
		else
		{
			front++;
		}

		printf("\r\nThe deleted element is %d", element);
	}
}

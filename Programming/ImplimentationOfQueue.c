#include<stdio.h>
#include<conio.h>
#define SIZE 10
void enqueue (int);
void dequeue ();
void display ();
int queue[SIZE];
int front =-1 ,rear =-1;
void main()
{
	int value , choice ;
	clrscr();
	while (1)
	{
		printf("\n\n ** MENU ** \n\n");
		printf("1. enqueue \n 2. dequeue \n 3. display \n 4 . exit \n");
		printf("enter your choice :");
		scanf("%d", & choice);
		switch(choice)
		{
			case 1: 
				printf("enter the value to be inserted");
				scanf("%d", & value);
				enqueue(value);
				break;
			case 2:
				dequeue();
				break;
			case 3: 
				display();
				break;
			case 4: 
				exit(0);
			default : printf(" wrong selection try again");
		}
		getch();
	}
}
void enqueue(int value)
{ 
	if(rear = SIZE-1 )
	{
		printf("queue is full insertion not possible ");
	}
	else
	{
		if ( front ==-1)
		front = 0;
		rear ++;
		queue[rear]=value;
		printf(" insertion succes \n");
	}
}
void dequeue()
{
	if (front == rear -1)
	{
		printf("queue is empty deletion not possible ");
	}
	else
	{
		printf("deleted element is %d ",queue[front]);
		if (front==rear)
		{
			front =-1;
			rear =-1;
		}
		front ++;
	}
}
void display()
{
	if (rear == -1)
	{
		printf("queue is empty");
	}
	else
	{
		int i;
		printf("queue elements are :");
		for(i=front ;i<=rear ;i++)
		printf("%d\t",queue[i]);
	}
}

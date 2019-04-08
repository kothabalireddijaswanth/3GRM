#include<stdio.h>
#include<conio.h>
#define MAX 4 
int q[MAX] , element , front=0 , rear=-1 , choice;
void reardequeue()
{
	if((front==0)&&(rear=-1)
		printf("queue is underflow");
	else
	if(rear==front)
		printf("%d",queue[rear]);
	rear=-1;
	front=0;
	}
	else
	printf("queue[rear--]");
}
void frontdequeue()
{
	if((f==0)&&(rear=-1)
		printf("queue is underflow");
	else
	if(front==rear)
	{
	printf("%d",queue[front++]);
}
void rearenqueue(int ele)
{
	if(r==MAX-1)
		printf("queue is overflow\n");
	else
	queue[++rear]=element;
}
void frontenqueue(int element)
{
	if((front==0)&&(rear=-1)
	queue[++rear]=element;
	else
	if(front!=0)
	queue[--front]=element;
	else
		printf("front insertion is not possible");
}
void display()
{
	int i;
	if(front=0&&rear==-1)
		printf("queue is empty");
	else
	{
	for(i=front ; i<=rear ; i++)
		printf("%d",queue[i]);
	}
}
void main()
{
clrscr();
	printf("\n 1. rearenqueue\n 2. frontenqueue\n 3. reardequeue\n 4. frontdequeue\n 5. display \n 6. exit\n");
do
{
	printf("\n enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		printf("enter the element");
		scanf("%d",&element);
		rearenqueue(element);
		break;
	case 2:
		printf("enter the element");
		scanf("%d",&element);
		frontenqueue(element);
		break;
	case 3:
		frontdequeue();
		break;
	case 4:
		reardequeue();
		break;
	case 5:
		display();
		break;
	case 6:exit(0);
	}
	while(ch!=5)
	}
}	

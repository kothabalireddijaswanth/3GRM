#include<stdio.h>
#include<conio.h>
#define size 5
void push(int);
void pop();
void display();
int stack[SIZE];
int top==-1;
void main()
{
	int value , choice;
	clrscr();
	while(1)
	{
		printf("\n\n ** MENU ** \n\n");
		printf("1.push \n  2.  pop \n  3. display \n  4. exit \n");
		printf("enter your choice :");
		scanf("%d" , & choice);
		switch (choice)
		{
			case 1:
				printf("enter the value to be inserted :");
				scanf("%d" , & value);
				push(value);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default : printf("wrong selection try again ");
		}
		return();
	}
}
void push(int value)
{
	if( top==SIZE-1)
	{
		printf(" \n stack is full insection not possible ");
	}
	else
	{
		top ++;
		stack[top]=value;
		printf(" \n insertion sucess");
	}
}
void pop()
{
	if(top==-1)
	{
		printf(" \n stack is empty deletion is not possible ");
	}
	else
	{
		printf("deleted is %d ",stack[top]);
		top--;
	}
}
void display()
{
	if( top == -1)
	{
		printf("stack is empty");
	}
	else
	{
		int i;
		printf("stack elements are :");
		for(i = 0 ; i>=0 ; i--)
		printf("%d \n ",stack [i]);
	}
}

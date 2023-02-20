#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
	int data;
	struct node *next;
};
	struct node *top=NULL;
	struct node *a=NULL;
void main()
{
	int opt;
	do
	{
		printf("Enter your choice:\n 1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");
		scanf("%d",&opt);
	switch(opt)
	{
	case 1:
		push();
		break;
	case 2:
 		pop();
		break;
	case 3:
		display();
		break;
	case 4:
		printf("exit");
	}
	}while(opt!=4);
		}
void push()
{
	struct node *new=NULL;
	new=(struct node*)malloc(sizeof (struct node));
	printf("enter the data to be pushed:");
	scanf("%d",&new->data);
	new->next=top;
	top=new;
	a=top;
}
void pop()
{
	struct node *(ptr);
	if (top==NULL)
		printf("Stack underflow\n");
	else
	{
		printf("THe item to be popped:%d\n",top->data);
		ptr=top;
		top=top->next;
		free(ptr);
	}
}
void display()
{
	a=top;
	if(a==NULL)
	{
		printf("stack empty\n");
	}
	else while(a!=NULL)
	{
		printf("%d\n",a->data);
		a=a->next;
	}
}




#include<stdio.h>
#include<stdlib.h>
 
void push();
void pop();
void display();

struct node{
	int data;
	struct node *next;
};

struct node *top= NULL;
struct node *pr=NULL;

 void main()
{
	int c;
do
{
	printf("Enter your choice \n 1.PUSH \n 2.POP \n 3.DISPLAY \n 4.EXIT\n");
	scanf("%d",&c);
    switch(c)
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
	default: 
		printf("EXITED");
  }}while(c!=4);


}

void push()
{
	struct node *new=NULL;
	new=(struct node *)malloc(sizeof(struct node));
	printf("Enter the element to be pushed : ");
	scanf("%d",&new->data);
	new->next=top;
	top=new;
	pr=top;
}
void pop()
{
	struct node *ptr;
	if (top==NULL)
	printf("underflow");
	else
	{
	   	printf("Item to be poped is %d",top->data);
		ptr=top;
		top=top->next;
		free(ptr);
	}
}

void display()
{      
        pr=top;
	if (pr==NULL)
	printf("EMPTY");
	else
             printf("STACK : \n");
	  while(pr!=NULL)
	{
		printf("%d \n",pr->data);
		pr=pr->next;
	}

}


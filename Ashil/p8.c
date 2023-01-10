#include<stdio.h>        /* creation and insertion at end */
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
	struct node *prev;
};
 struct node *head=NULL;
 struct node *ptr=NULL;

void main()
{
	 int n,i;
	 struct node *new;
	printf("Enter the number of nodes :\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
{
	printf("Enter the data : \n");
	new=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&new->data);
	new->prev=NULL;
	new->next=NULL;

	if (head==NULL)
		head=new;
	else
{
		ptr=head;
    while(ptr->next!=NULL)

	ptr=ptr->next;

	ptr->next=new;
	new->prev=ptr;
}}
	printf("Doubly linked List : \n");
	ptr=head;	
	while(ptr!=NULL)
{
 	printf("%d",ptr->data);
	ptr=ptr->next;
}

new=(struct node*) malloc(sizeof(struct node));
printf("enter the new data to be inserted:");
scanf("%d",&new->data);
new->prev=NULL;
new->next=NULL;
ptr=head;
while(ptr!=NULL)
{
if(ptr->next!=NULL)
ptr=ptr->next;
else{
ptr->next=new;
new->prev=ptr;
}}
printf("The New Doubly linked list  is:");
ptr=head;
while(ptr!=NULL)
{
printf("%d \n",ptr->data);
ptr=ptr->next;
}
}









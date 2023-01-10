#include<stdio.h>        /* creation and insertion at Between*/
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
	struct node *prev;
};
 struct node *head=NULL;
 struct node *ptr=NULL;
 struct node *ptr1=NULL;

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

printf("\nInsertion Between \n");
int k;
new=(struct node *)malloc(sizeof(struct node));
printf("Enter the data to be inserted :\n");
scanf("%d",&new->data);
printf("Enter the key :\n");
scanf("%d",&k);


if(head==NULL)
	head=new;
ptr=head;
while(ptr!=NULL && ptr->data!=k)
ptr=ptr->next;
if(ptr->next==NULL)
{
ptr->next=new;
ptr->prev=ptr;
}
else
{
ptr1=ptr->next;
new->next=ptr1;
new->prev=ptr;
ptr->next=new;
ptr1->prev=new;
}


printf("INSERTED LIST :\n");

ptr=head;	
	while(ptr!=NULL)
{
 	printf("%d",ptr->data);
	ptr=ptr->next;
}
}




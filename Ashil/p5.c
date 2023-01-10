#include<stdio.h>
#include<stdlib.h>
 
 struct node{
  int data;
  struct node *next;
  };
struct node *head=NULL,*ptr=NULL;
void main()
{
int n,i;
struct node *new;
printf("enter no of nodes:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
new=(struct node*) malloc(sizeof(struct node));
printf("enter the data to be insert:");
scanf("%d",&new->data);
new->next=NULL;
if(head==NULL)
{
head=new;
}
else
{
ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=new;
}
}
printf("the singly list before  is:");
ptr=head;
while(ptr!=NULL)
{
printf("%d->",ptr->data);
ptr=ptr->next;
}


new=(struct node*) malloc(sizeof(struct node));
printf("enter the new data to be insert:");
scanf("%d",&new->data);
new->next=head;
head=new;
printf("the singly list after  is:");
ptr=head;
while(ptr!=NULL)
{
printf("%d->",ptr->data);
ptr=ptr->next;
}
}


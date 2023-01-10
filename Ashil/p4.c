#include<stdio.h>
#include<stdlib.h>

struct node 
{
  int data;
  struct node *next;
};

struct node *head=NULL; 
struct node *ptr=NULL;


void main()
	{
 	int n,i,a;
struct node *new=NULL; 
 	printf("Enter the number of nodes : ");
 	scanf("%d",&n);
	 
		//for(i=0;i<n;i++)
		
     		new =(struct node*)malloc(sizeof(struct node));
     		printf("Enter the data to be inserted : \n");
     		scanf("%d",&a);
                printf("test %d",a);
                new->data=a;
     		new->next=NULL;
                
     		if(head==NULL)
{
   		head=new;
printf("test");
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
	
	printf("The created list is : \n");
	ptr=head;
	//while(ptr!=NULL)
	//{
	//printf("%d",ptr->data);
	//ptr=ptr->next;
	//}
 }


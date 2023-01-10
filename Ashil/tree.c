#include<stdio.h>
#include<stdlib.h>
struct node 
{
        struct node *left;
        struct node *right;
        int data;
};
struct node *ptr =NULL;
struct node *new=NULL;
struct node *root=NULL;
void insert();
void inorder(struct node *);
void preorder(struct node *);
void postorder(struct node *);
void search(struct node *);
void delete(struct node *);
 void main()
 {
 int c;
while (c!=5)
{
        printf(" 1.insertion \n 2.Inorder \n 3.Preorder \n 4.Postorder \n 5.Search \n 6.Delete \n 7.Exit\n Enter your choice : \n");
        scanf("%d",&c);
                
                switch(c)
{
                case  1:insert();
                             break;
                case  2:inorder(root);
                             break;
                case  3:preorder(root);
                            break;
                case  4:postorder(root);
                            break;
                case 5:search(root);
                            break;
                case 6:delete(root);
                            break;
                            default:printf("Invalid choice \n");
}
}
}

void insert()
{
struct node *new, *ptr1;
int x;
new=(struct node *) malloc(sizeof(struct node));
printf("Enter Data : ");
scanf("%d",&new->data);
x=new->data;
if(new==NULL)
{
        printf("NO MEMORY \n");
}
    
if(root==NULL)
{
        root=new;
}
else
{
        ptr=root;
        while(ptr!=NULL)
        {
                if (x==ptr->data)
                printf("Item Present \n");
                
                else  if(x>ptr->data)
                {
                        ptr1=ptr;
                        ptr=ptr->right;
                 }
                 else
                 {
                        ptr1=ptr;
                        ptr=ptr->left;
                   }
                   
        }        


        if(x>ptr1->data)
   {   
        ptr1->right=new;
        }
        else{
        ptr1->left=new;
            
}}}
void inorder(struct node *ptr)
{
        if(ptr!=NULL)
{
        inorder(ptr->left);
        printf("%d \n",ptr->data);
        inorder(ptr->right);
}
}
void preorder(struct node *ptr)
{
        if(ptr!=NULL)
        {
        printf("%d \n",ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);
        }
}
void postorder(struct node *ptr)
{       
        if(ptr!=NULL)
        {
        postorder(ptr->left);
        postorder(ptr->right);
        printf("%d  \n",ptr->data);
        }
}
void search(struct node *ptr)
{
int k; int d;
printf("Enter the key to searched:");
scanf("%d",&k);
if(root ==NULL)
{
printf("Empty");
}
if(root->data=k)
{
printf("%d",root->data);
}
if(root->data < k){
       search(root->right);
       printf("%d \n",root->data);
}
if(root->data > k)
{      search(root->left);
              printf("%d \n",root->data);
}}

void delete(struct node *ptr)
{
int k;
struct node *i=NULL;
struct node *p =NULL;
printf("Enter the key to be deleted : \n");
scanf("%d",&k);

if(root==NULL){
printf("UNDERFLOW");
}
ptr=root;
while(ptr!=NULL)
{
if(ptr->data==k)
break;
p=ptr;
if(k>ptr->data)
ptr=ptr->right;
else
ptr=ptr->left;
}
if(ptr==NULL)
printf("NOt present");
if(ptr->right==NULL && ptr->left==NULL)//case 1
{
if (p==NULL)
root=NULL;
else if(p->right==ptr)
parent->right=NULL;
else
parent->left=NULL;

printf("Deleted");
free(ptr);
}
if(ptr->right!=NULL && ptr->left!=NULL) //case 3 inorder successor
i=ptr->roght;
while(p->left!=NULL)
{
p=p->left
}




//Program to perfrom insertions and traversal operations on a binary search tree.
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *root=NULL;

void insert(int);
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);
void search(int);
void delete(int);
struct node* min_val_node(struct node*);

void main(){
	int ch=0,key;
	do{
		printf("\n Binary Search Tree...\n\t1.Insertion\n\t2.Inorder Traversal\n\t3.Preorder Traversal\n\t4.Postorder Traversal");
		printf("\n\t5.Search\n\t6.Delete an element\n\t7..Exit");
		printf("\n Enter your choice(1-5):");
		scanf("%d",&ch);
		switch(ch){
			case 1: printf("\n Enter the data to be inserted :");
				scanf("%d",&key);
				insert(key);
				break;
			case 2: inorder(root);
				break;
			case 3: preorder(root);
				break;
			case 4: postorder(root);
				break;
			case 5: printf("\n Enter the key to be searched:");
				scanf("%d",&key);
				search(key);
				break;
			case 6: printf("\n Enter the key to be deleted:");
				scanf("%d",&key);
				delete(key);
				break;
			case 7: exit;
				printf("\n Exit!! \n");
				break;
			default:printf("\n Invalid Choice!! ");				
		}		
	}while(ch!=7);
}

void insert(int key){
	struct node *new=NULL,*parent=NULL,*ptr=NULL;
	new=(struct node*)malloc(sizeof(struct node));
	if(new==NULL){
		printf("\n Insufficient Memory!!");
		return;	
	}
	else{
		new->data=key;
		new->left=NULL;
		new->right=NULL;
		if(root==NULL)
			root=new;
		else{
			//loop to check the position to which the node needs to be inserted in the tree.
			ptr=root;
			while(ptr!=NULL){
				if(key==ptr->data){
					printf("\n Duplicate elements not allowed..");
					break;				
				}
				else if(key>ptr->data){
					parent=ptr;
					ptr=ptr->right;
				}
				else{
					parent=ptr;
					ptr=ptr->left;				
				}
			}
			//insert node to the leafnode
			if(ptr==NULL){
				if(key>parent->data)
					parent->right=new;
				else
					parent->left=new;
			}	
		}	
	}	
}

void inorder(struct node *ptr){
	if(root==NULL)
		printf("\n Tree is empty!!");	
	else{
		if(ptr!=NULL){	
			inorder(ptr->left);
			printf("%d ",ptr->data);
			inorder(ptr->right);			
		}
	}
}

void preorder(struct node *ptr){
	if(root==NULL)
		printf("\n Tree is empty!!");	
	else{
		if(ptr!=NULL){	
			printf("%d ",ptr->data);
			preorder(ptr->left);
			preorder(ptr->right);	
		}		
	}
}

void postorder(struct node *ptr){
		if(root==NULL)
		printf("\n Tree is empty!!");	
	else{
		if(ptr!=NULL){	
			postorder(ptr->left);
			postorder(ptr->right);
			printf("%d ",ptr->data);	
		}		
	}
}

void search(int key){
	struct node *ptr=NULL,*parent=NULL;
	if(root==NULL)
		printf("\n Tree is empty!!");
	else{
		ptr=root;
		while(ptr!=NULL){
			if(key==ptr->data){
				printf("\n %d present in the tree.",ptr->data);
				break;				
			}
			else if(key>ptr->data){
				parent=ptr;
				ptr=ptr->right;
			}
			else{
				parent=ptr;
				ptr=ptr->left;				
			}
		}
		if(ptr==NULL)
			printf("\n %d not present in tree.",key);
	}
}

void delete(int key){
	struct node *ptr=NULL;
	if(root==NULL)
		printf("\n Tree is empty!!");
	else{
		struct node *parent=NULL;
		ptr=root;
		while(ptr!=NULL){
			
			if(ptr->data==key){
				break;
			}
			else{
				parent=ptr;
				if(key > ptr->data)
					ptr=ptr->right;
				else
					ptr=ptr->left;
			}
		}
		if(ptr==NULL){
			printf("%d is not present in the tree",key);
		}
		else
		{
			//case 1: if the data to be deleted is a leafnode
				if(ptr->right==NULL && ptr->left==NULL){
					if(parent==NULL)// node to be deleted is the last node in the tree
						root=NULL;
					else if(parent->right==ptr)
						parent->right=NULL;
					else 
						parent->left=NULL;
					free(ptr);
				}
				/*case 2: if the data to be deleted has both the left and right child nodes:
					  find the inorder successor (i.e. the leftmost child of the right subtree to be deleted)
				*/
				else if(ptr->right!=NULL && ptr->left!=NULL){
					struct node *p=NULL;
					p=ptr->right; //right subtree
					//find inorder successor and replace
					while(p->left!=NULL)
						p=p->left;
					int dat=p->data;
					delete(dat); //delete leafnode to avoid duplication
					ptr->data=dat;	
				}
				//case 3: if the data to be deleted has one child node, either left or right.
				else{
					if(parent==NULL)
					{
						if(ptr->right==NULL)
							root=ptr->left;
						else
							root=ptr->right;					
					}
					else{
						if(parent->right==ptr){
							if(ptr->right==NULL)
								parent->right=ptr->left;
							else
								parent->right=ptr->right;			
						}	
						else{
							if(ptr->left==NULL)
								parent->left=ptr->right;
							else
								parent->left=ptr->left;				
						}
						free(ptr);
					}
				}
		}
		printf("\n element deleted");
	}

}



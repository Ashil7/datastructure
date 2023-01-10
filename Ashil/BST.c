#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node *left;
	struct node *right;
	int data;
};

struct node *new=NULL,*ptr=NULL,*root=NULL, *leaf=NULL;
void insert();
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);

void main() {
	int opt;
	do {
		printf("\nChoose the operation number\n");
		printf("1.Insert \n2.Inorder-display \n3.Preorder-display \n4.Postorder-display \n0.Exit : ");
		scanf("%d",&opt);
		switch(opt) {
			case 1: insert();
							break;
			case 2: inorder(root);
							break;
			case 3: preorder(root);
							break;
			case 4: postorder(root);
							break;
			case 0:
			default:break;
		}
	} while(opt!=0);
}

void insert() {
	new = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data : ");
	scanf("%d",&new->data);
	new->left = new->right = NULL;
	if (new==NULL)
		printf("Insuffient memory");
	else {
		if (root == NULL) {
			root = new;
		}
		else {
			ptr = root;
			while(ptr!=NULL){
				if(new->data == ptr->data) 
					printf("Item already exists");
				else if(new->data > ptr->data) {
					leaf = ptr;
					ptr=ptr->right;
				}
				else {
					leaf = ptr;
					ptr=ptr->left;
				}
			}
			if(new->data > leaf->data)
				leaf->right = new;
			else 
				leaf->left = new;
		}	
	}
}

void inorder(struct node *ptr){
	if(ptr!=NULL){
		inorder(ptr->left);
		printf("%d ",ptr->data);
		inorder(ptr->right);
	}
}

void preorder(struct node *ptr){
	if(ptr!=NULL){
		printf("%d ",ptr->data);
		preorder(ptr->left);
		preorder(ptr->right);
	}
}
void postorder(struct node *ptr){
	if(ptr!=NULL){
		postorder(ptr->left);
		postorder(ptr->right);
		printf("%d ",ptr->data);
	}
}

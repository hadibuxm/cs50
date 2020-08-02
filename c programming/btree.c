#include<stdio.h>
#include<stdlib.h>
//
typedef struct node{
	int data;
	struct node * left;
	struct node * right;

}node;
//
void insert(node * n,int data){
	if(data>n->data){
		if(n->right!=NULL){
			insert(n->right,data);
		}
		else{
			n=malloc(sizeof(n));
			n->data=data;
			n->left=NULL;
			n->right=NULL;
		}
	}
	else if(data<n->data){
		if(n->left!=NULL){
			insert(n->left,data);
		}
		else{
			n=malloc(sizeof(n));
			n->data=data;
			n->left=NULL;
			n->right=NULL;
		}
	}
}
/*
void print_tree(struct node * root){
		printf("%i",root->data);
		if(root->right!=NULL){
			print_tree(root=root->right);
		}
		if(root->left!=NULL){
			print_tree(root=root->left);
		}
}*/
//
int main(void){
	node * root=NULL;
	root=malloc(sizeof(node));
	root->data=5;
	root->left=NULL;
	root->right=NULL;
	insert(root,3);
	insert(root,4);
	insert(root,6);
	//print_tree(root);
	printf("%i",root->data);
	printf("%i",root->left->data);
	
	
}

#include<stdio.h>
#include<stdlib.h>
//
typedef struct node{
	int data; // data field of node
	struct node * left; // right child of node
	struct node * right; //left child of node

}node;
//
void insert(node * n,int data){
	if(data>n->data){ // if data is greater than parent node
		if(n->right!=NULL){ // if right child exits 
			insert(n->right,data); // compare with new node 
		}
		else{ // if current node has no right child
			node *temp=malloc(sizeof(n)); // create new node
			temp->data=data; // assigning data field
			n->right=temp;   // make this new node right of current node
			temp->left=NULL; // left of new node is empty
			temp->right=NULL;// right of new node is empty 
		}
	}
	else if(data<n->data){ // if data is less than current node
		if(n->left!=NULL){ // if left child exits 
			insert(n->left,data); // compare with current node 
		}
		else{ // if current node has no left child
			node * temp=malloc(sizeof(n));// create new node 
			n->left=temp; //make this new node left of current node
			temp->data=data; //assigning data to new node
			temp->left=NULL; //left is empty for new node
			temp->right=NULL; //right is empty for new node
		}
	}
}
/*
void search(node * n,int data){
	if(data>n->data){ // if data is greater than parent node
		if(n->right!=NULL){ // if right child exits 
			insert(n->right,data); // compare with new node 
		}
		else{ // if current node has no right child
			printf("Data does not exist in Tree");
		}
	}
	else if(data<n->data){ // if data is less than current node
		if(n->left!=NULL){ // if left child exits 
			insert(n->left,data); // compare with current node 
		}
		else{ // if current node has no left child
			printf("Data does not exist in Tree");
		}
	}
	else{
		printf("data exits");
	}
}*/
// print function 
void print_tree(struct node * root){
		printf("%5i",root->data);
		
		if(root->left!=NULL){
			print_tree(root->left);
		}
		if(root->right!=NULL){
			print_tree(root->right);
		}
}
// main
int main(void){
	node * root=NULL;
	root=malloc(sizeof(node));
	root->data=5;
	root->left=NULL;
	root->right=NULL;
	insert(root,3);
	insert(root,4);
	insert(root,6);
	insert(root,11);
	insert(root,1);
	printf("Preorder:");
	print_tree(root);
	printf("\n");
	//search function
	//search(root,9);
}

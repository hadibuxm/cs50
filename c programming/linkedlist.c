#include<stdio.h>
#include<stdlib.h>
// structure
typedef struct node{
	int data;
	struct node *next;
}node;
//
void print_linked_list(node * n){
	//n=n->next;
	while(n!=NULL){
		printf("%d\n",n->data);
		n=n->next;
	}
}
/*
void insert(int data){
	node *new_node=malloc(sizeof(node)));
	new_node->next=NULL;
	new_node->data=data;

}*/
int main(void){
	node *list=NULL;
	node *n=malloc(sizeof(node));
	n->data=4;
	n->next=NULL;
	list=n;
	//second node
	n=malloc(sizeof(node));
	list->next=n;
	n->data=5;
	print_linked_list(list);
	return 0;
}

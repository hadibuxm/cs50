#include<stdio.h>
void displayname(char name[]);
void main(){

	//char test[5]={'h','a','d','i','i'};
	//printf("%c",test[0]);
	//for(int j=0;j<5;j++){
	//	printf("%c",test[j]);
	//}
	
	int length;// memory for length
	char name[length];//memory for name
	printf("enter size of name");//print statement
	scanf("%d",&length);//input for length
	printf("display name function\n");//print statement
	//scanf("%c",&name);
	for (int i=0;i<=length;i++){//take array of characters
		scanf("%c",&name[i]);
	}
	displayname(name);
	
	//char name[50];
	//scanf("%s",&name);
	//printf("%s",name);
	//printf("\n%c",name[0]);
	//printf("%c",name[50]);
	//return 0;
}

void displayname(char name[]){
	for(int count=0;name[count]!='\0';count++){
	    printf("\nfor name[%d]: %c\n",count,name[count]);
	}
}

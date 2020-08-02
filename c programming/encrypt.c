#include<stdio.h>
#include<string.h>
void encrypt(char msg[]);//declaration of encrypt function with input of array of integers
main(){
	char msg[100];//memory for message
	printf("Write Your message\n");//output to user
	scanf("%s",&msg);//input 
	//int length=strlen(msg);//meausres and stores length of message
	printf("After Encryption\n");//output statement
	encrypt(msg);
	return 0;
}
//function definition
void encrypt(char msg[]){
	for(int i=0;msg[i]!='\0';i++){
		printf("%c",msg[i]+1);
	}
	printf("\n");
}

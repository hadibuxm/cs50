#include<stdio.h>
#include<string.h>
main(){
	char text[20];
	printf("Enter text");
	scanf("%s",text);
	printf("Before:\n");
	printf("%s\n",text);
	printf("After\n");
	for(int i=0;text[i]!='\0';i++){
		if(text[i]>='a' && text[i]<='z'){
			printf("%c",text[i]-32);
		}
		else{
			printf("%c",text[i]);
		}
	}
	printf("\n");
	return 0;		
}

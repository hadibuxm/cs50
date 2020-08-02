#include<stdio.h>
#include<string.h>
//struct defination
typedef struct{
	char name[20];
	char cell[12];
}contact;
///main function
int main(void){
	contact people[4];
	//people[0].name[20]={'h','a','d','i','b','u','x'};
	strcpy(people[0].name,"hadi bux");
	strcpy(people[0].cell,"31254");
	strcpy(people[1].name,"qalandar bux");
	strcpy(people[1].cell,"47852");
	strcpy(people[2].name,"Allah bux");
	strcpy(people[2].cell,"85236");
	strcpy(people[3].name,"Allah rakhio");
	strcpy(people[3].cell,"_341");
	for(int i=0;i<4;i++){
		if(strcmp(people[i].name,"hadi bux")==0){
			printf("%s\n",people[i].cell);
			return 0;
		}
	}
	printf("not found");
	return 1;
}

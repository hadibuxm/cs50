#include<stdio.h>
#define prime_condition_check 0
#define counter_check 1
#define start 2
void prime_no(int limit);
int main(void){
	int limit;
	printf("Prime numbers\n");
	printf("Enter limit\n");
	scanf("%d",&limit);
	prime_no(limit);
	return 0;
}
void prime_no(int limit){
	int counter=0;
	if(limit==counter_check){
		return;}
	prime_no(limit-counter_check);//recursion
	for(int no=start;no<=limit;no++){
		if(limit%no==prime_condition_check){
			counter++;}
		if(no==limit){
			if(counter==counter_check){
				printf("%d\n",no);}}}}


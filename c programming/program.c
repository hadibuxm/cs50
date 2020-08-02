#include<stdio.h>
#include<unistd.h>
int main(){
	for(int i=0;;i*=2){
		printf("%i",i);
		printf("hadi knows nothing");
		sleep(1);
	}
	return 0;
}

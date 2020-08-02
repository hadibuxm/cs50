#include<stdio.h>
#include<stdlib.h>

int main(void)
{   int *rollno=malloc(3*sizeof(int));
    rollno[0]=4;
    rollno[1]=5;
    rollno[2]=6;
    int * newroll=realloc(rollno,4 * sizeof(int));
    if(newroll==NULL)
    {
    	return 1;
    }
    
    rollno=newroll;
    newroll[3]=7;
    for (int j=0;j<4;j++)
    {
        printf("%i\n",rollno[j]);
    }
    return 0;
}

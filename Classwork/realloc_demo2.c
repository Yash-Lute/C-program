#include<stdio.h>
#include<stdlib.h>
int main()
{

int *Arr=NULL;

// step1:Allocate the memory 
Arr=(int *)malloc(5*sizeof(int));       //20
//step2: use the memory

Arr=(int *)realloc(Arr,3*sizeof(int));  //12

// step3:Free the memory
free(Arr);



    return 0;
}
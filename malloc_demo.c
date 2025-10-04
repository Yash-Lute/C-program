#include<stdio.h>
#include<stdlib.h>
int main()
{
int length=0;
int *Arr=NULL;
printf("Enter the no of elements:\n");
scanf("%d",&length);
// step1:Allocate the memory 
Arr=(int *)malloc(length*sizeof(int));
if (Arr==NULL)

{
   printf("Unable to allocate the memory\n");
}
else
{
    printf("Memory gets allocated successfully\n");
}
// step2: use the memory

// step3:Free the memory
free(Arr);



    return 0;
}
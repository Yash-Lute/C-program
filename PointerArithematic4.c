#include<stdio.h>

int main()
{

int Arr[]={11,21,51,101,111};

int *p=NULL;
int *q=NULL;

p=&(Arr[1]);
q=&(Arr[4]);

printf("Result of subtraction is :%ld\n",q-p);//allowed  // ld - because pointer are of long type to avoid warning

q=q-2;   //allowed
printf("Data pointed by q is : %d\n",*q);

    return 0;
}
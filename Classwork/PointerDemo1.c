#include<stdio.h>

int main()
{
    int iValue=11;
    char cValue='M';
    
    int *iptr=&iValue;
    char *cptr=&cValue;

    printf("sizeof iptr:%lu\n",sizeof(iptr));
    printf("sizeof cptr:%lu\n",sizeof(cptr));


    return 0;
}
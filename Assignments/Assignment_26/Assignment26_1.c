#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt=0;
    char cValue='\0';
    cValue='A';
    for ( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",cValue);
        cValue++;

    }
    
}
int main()
{
int iValue=0;

printf("Enter no of elements");
scanf("%d",&iValue);

Pattern(iValue);

    return 0;
}
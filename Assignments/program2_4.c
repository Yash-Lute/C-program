#include<stdio.h>
void Display(int iNo,int iFrequency)
{
    int iCnt=0;
    if (iNo<0)
    {
        iNo=-iNo;
    }
    if (iFrequency<0)
    {
        iFrequency=-iFrequency;
    }
    
    for ( iCnt = 1; iCnt <=iFrequency ; iCnt++)
    {
        printf("%d\t",iNo);
    }
    
    
}
int main()
{
    int iValue1=0,iCount=0;
    printf("enter number");
    scanf("%d",&iValue1);

    printf("enter frequency");
    scanf("%d",&iCount);
    Display(iValue1,iCount);



    return 0;
}
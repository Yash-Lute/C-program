#include<stdio.h>
int FactDiff(int iNo)
{
    if (iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0,iSum1=0,iSum2=0,iAns=0,iCnt2=0;
    for ( iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if (iNo%iCnt==0)
        {
            iSum1=iSum1+iCnt;
        }
       
    }
    for ( iCnt2 = 1; iCnt2 <= iNo; iCnt2++)
    {
        if (iNo%iCnt2!=0)
        {
            iSum2=iSum2+iCnt2;
        }
        
    }
    
    
    iAns=iSum1-iSum2;
    return iAns;
    
}
int main()
{
int iValue=0,iRet=0;

printf("enter number:");
scanf("%d",&iValue);
iRet=FactDiff(iValue);
printf("%d",iRet);


    return 0;
}
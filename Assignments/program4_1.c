#include<stdio.h>
int MultFact(int iNo)
{
    int iCnt=0;
    int iMulti=1;
    if (iNo<0)
    {
        iNo=-iNo;
    }
    for ( iCnt = 1; iCnt <=iNo/2; iCnt++)
    {
        if (iNo%iCnt==0)
        {
           iMulti=iMulti*iCnt;   
        }
        
    }
    return iMulti;
    
    
}
int main()
{int iValue=0,iRet=0;
    printf("enter number:");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);
    printf("multiplication of factors :%d",iRet);
    return 0;
}
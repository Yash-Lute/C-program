#include<stdio.h>
int FactorialDiff(int iNo)
{
    int iCnt=0,iFactorial1=1,iFactorial2=1,iDifference=0;
    if (iNo<0)
    {
        iNo=-iNo;
    }
    
    for ( iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if (iCnt%2!=0)
        {
           iFactorial1=iFactorial1*iCnt;
        }
        else
        {
            iFactorial2=iFactorial2*iCnt;
        }
    }
    iDifference=iFactorial2-iFactorial1;
    return iDifference;
    
    // Time Complexity:O(n)
    
}
int main()
{
    int iValue=0,iRet=0;
    printf("enter number:");
    scanf("%d",&iValue);
   iRet=FactorialDiff(iValue);
   printf(" Factorial difference is %d ",iRet);
    return 0;
}
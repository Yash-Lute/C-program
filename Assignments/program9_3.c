#include<stdio.h>
int EvenFactorial(int iNo)
{
    int iCnt=0,iFactorial=1;
    if (iNo<0)
    {
        iNo=-iNo;
    }
    
    for ( iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if (iCnt%2==0)
        {
           iFactorial=iFactorial*iCnt;
        }
        
    }
    return iFactorial;
    
    // Time Complexity:O(n)
    
}
int main()
{
    int iValue=0,iRet=0;
    printf("enter number:");
    scanf("%d",&iValue);
   iRet=EvenFactorial(iValue);
   printf("Even Factorial of number is %d ",iRet);
    return 0;
}
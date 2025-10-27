#include<stdio.h>
int Factorial(int iNo)
{
    int iCnt=0,iFactorial=1;
    if (iNo<0)
    {
        iNo=-iNo;
    }
    
    for ( iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFactorial=iFactorial*iCnt;
    }
    return iFactorial;
    // time complexity: O(n)
}
int main()
{
    int iValue=0,iRet=0;
    printf("enter number:");
    scanf("%d",&iValue);
    iRet=Factorial(iValue);
    printf("Factorial of number is %d",iRet);

    return 0;
}
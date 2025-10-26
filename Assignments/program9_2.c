#include<stdio.h>
int DollarToINR(int iNo)
{
    int inr=0;
    inr=iNo*70;
    return inr;
    // Time Complexity:O(1)
    
}
int main()
{
    int iValue=0,iRet=0;
    printf("enter number:");
    scanf("%d",&iValue);
   iRet= DollarToINR(iValue);
   printf("Value in INR is %d",iRet);
    return 0;
}
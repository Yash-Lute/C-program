#include<stdio.h>
int RangeSumEven(int iStart,int iEnd)
{
    int iCnt=0,iadd=0;
    if (iStart<0)
    {
        printf("Invalid range\n");
        return 0;
    }
    
    if (iStart>iEnd)
    {
        printf("INVALID RANGE\n");
       
    }
    
    for ( iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if (iCnt%2==0)
        {
             iadd=iadd+iCnt; 
        }
        
          
       
    }
    return iadd;

    // Time complexity :O(n)
}
int main()
{int iValue1=0,iValue2=0,iRet=0;

    printf("enter starting point");
    scanf("%d",&iValue1);

    printf("enter ending point");
    scanf("%d",&iValue2);

   iRet= RangeSumEven(iValue1,iValue2);
   printf("Addition is %d",iRet); 
    return 0;
}
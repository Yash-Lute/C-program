#include<stdio.h>
void RangeDisplayEven(int iStart,int iEnd)
{
    int iCnt=0;
    if (iStart>iEnd)
    {
        printf("INVALID RANGE");
       
    }
    
    for ( iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if (iCnt%2==0)
        {
            printf("%d\t",iCnt);
        }
        
       
    }

    // Time complexity :O(n)
}
int main()
{int iValue1=0,iValue2=0;

    printf("enter starting point");
    scanf("%d",&iValue1);

    printf("enter ending point");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);
    return 0;
}
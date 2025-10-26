#include<stdio.h>
void TableRev(int iNo)
{
    int iCnt=0;
    if (iNo<0)
    {
        iNo=-iNo;
    }
    
   for ( iCnt = 10; iCnt >= 1; iCnt--)
   {
          printf("%d\t",iNo*iCnt);
   }
   
    // time complexity: O(n)
}
int main()
{
    int iValue=0;
    printf("enter number:");
    scanf("%d",&iValue);
    TableRev(iValue);
    

    return 0;
}
#include<stdio.h>
void Table(int iNo)
{
    int iCnt=0;
    if (iNo<0)
    {
        iNo=-iNo;
    }
    
   for ( iCnt = 1; iCnt <= 10; iCnt++)
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
    Table(iValue);
    

    return 0;
}
#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int iCnt=0;
   
    for ( iCnt = 1; iCnt <=5; iCnt++)
    {
        printf("%d\t",iNo*iCnt);
    }
    
    // Time Complexity: O(n)
}
int main()
{
int iValue=0;
printf("enter number");
scanf("%d",&iValue);
MultipleDisplay(iValue);
    return 0;
}
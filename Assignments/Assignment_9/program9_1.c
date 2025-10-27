#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    if (iNo<0)
    {
        iNo=-iNo;
    }
    
    for ( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
    for ( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#");
    }
    // Time Complexity:O(2n)
    
}
int main()
{
    int iValue=0;
    printf("enter number:");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}
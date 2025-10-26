#include<stdio.h>
void Display(int iNo)
{
    int iCnt=1;
    if (iNo<0)
    {
        iNo=-iNo;
    }
    
    while (iCnt<=iNo)
    {
        printf("*");
        iCnt++;
    }
    
}
int main()
{
int iValue=0;
printf("enter number");
scanf("%d",&iValue);
Display(iValue);
return 0;
}
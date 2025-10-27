#include<stdio.h>
float Percentage(int iNo1,int iNo2)
{
    float percent=0.0f;
if (iNo1==0)
{
    printf("invalid input\n");
    return 0;
}

    percent=((float)iNo2/(float)iNo1)*100;
    
    return percent;
}
int main()
{
    int iValue1=0,iValue2=0;
    float fRet=0.0;

    printf("please enter total marks:");
    scanf("%d",&iValue1);
    printf("please enter obtained marks:");
    scanf("%d",&iValue2);

    fRet=Percentage(iValue1,iValue2);
    printf("percentage obtained:%f",fRet);
    return 0;
}
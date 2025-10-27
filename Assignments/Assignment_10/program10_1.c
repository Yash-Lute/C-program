#include<stdio.h>
double CircleArea(float fRadius)
{
    double dArea=0.0f;
    float PI=3.14f;

    dArea= PI*fRadius*fRadius;
    return dArea;
}
int main()
{
 float fValue=0.0f;
 double dRet=0.0f;

 printf("enter radius ");
 scanf("%f",&fValue);

 dRet=CircleArea(fValue);
 printf("Area of circle is %lf",dRet);
    return 0;
}
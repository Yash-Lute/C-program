#include<stdio.h>
double FhtoCs (float fTemp)
{
    double dCelsius=0.0;
    

    dCelsius=(fTemp-32)*(5.0/9.0);
    return dCelsius;
}
int main()
{
 float fValue=0.0f;
 double dRet=0.0;

 printf("enter temperature in Fahrenheit ");
 scanf("%f",&fValue);

 

 dRet=FhtoCs(fValue);
 printf("Temperature in   %lf Celsius",dRet);
    return 0;
}
#include<stdio.h>
int  KMtoMeter(int iNo)
{
     int meters=0;
     meters=iNo*1000;
     return meters;   
}
int main()
{
 int iValue=0,iRet=0;

 printf("enter Distance ");
 scanf("%d",&iValue);

  
 iRet=KMtoMeter(iValue);
 printf("%d meters",iRet);
    return 0;
}
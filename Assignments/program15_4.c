#include<stdio.h>
int MultDigits(int iNo)
{
    int iDigit=0,iMultiply=1;
   while (iNo!=0)
   {
      iDigit=iNo%10;
      iNo=iNo/10;
      if (iDigit==0)
      {
        iDigit=1;
      }
      
      iMultiply=iMultiply*iDigit;
      
   }
   return iMultiply;

}
int main()
{
int iValue=0,iRet=0;
printf("enter number");
scanf("%d",&iValue);
 
iRet=MultDigits(iValue);
printf("%d",iRet);
    return 0;
}
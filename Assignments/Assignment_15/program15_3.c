#include<stdio.h>
int CountRange(int iNo)
{
    int iDigit=0,iFrequency=0;
   while (iNo!=0)
   {
      iDigit=iNo%10;
      iNo=iNo/10;
      if (iDigit>3&&iDigit<7)
      {
         iFrequency++; 
      }
      
   }
   return iFrequency;

}
int main()
{
int iValue=0,iRet=0;
printf("enter number");
scanf("%d",&iValue);
 
iRet=CountRange(iValue);
printf("%d",iRet);
    return 0;
}
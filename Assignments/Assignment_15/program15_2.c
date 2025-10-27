#include<stdio.h>
int CountOdd(int iNo)
{
    int iDigit=0,iFrequency=0;
   while (iNo!=0)
   {
      iDigit=iNo%10;
      iNo=iNo/10;
      if (iDigit%2!=0)
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
 
iRet=CountOdd(iValue);
printf("%d",iRet);
    return 0;
}
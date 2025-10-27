#include<stdio.h>
int CountDiff(int iNo)
{
    int iDigit=0,ieven=0,iodd=0,iAns=0;
   while (iNo!=0)
   {
      iDigit=iNo%10;
      iNo=iNo/10;
      if (iDigit%2==0)
      {
        ieven=ieven+iDigit;
      }
      else
      {
        iodd=iodd+iDigit;
      } 
   }
   iAns=ieven-iodd;
   return iAns;

}
int main()
{
int iValue=0,iRet=0;
printf("enter number");
scanf("%d",&iValue);
 
iRet=CountDiff(iValue);
printf("%d",iRet);
    return 0;
}
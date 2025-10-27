#include<stdio.h>
#include<stdbool.h>
bool ChkZero(int iNo)
{
    int idigit=0;
   while (iNo!=0)
   {
      idigit=iNo%10;
      iNo=iNo/10;
      if (idigit==0)
      {
        return true;
      }
      
   }
   
}
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("enter number :");
    scanf("%d",&iValue);
  
   bRet=ChkZero(iValue);
   if (bRet==true)
   {
     printf("It contains zero");
   }
   else
   {
    printf("there is no zero");
   }
   
    return 0;
}
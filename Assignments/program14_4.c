#include<stdio.h>
int CountFour(int iNo)
{
    int idigit=0,iFrequency=0;
   while (iNo!=0)
   {
      idigit=iNo%10;
      iNo=iNo/10;
      if (idigit==4)
      {
        iFrequency++;
      }
      
   }
   return iFrequency;
   
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number :");
    scanf("%d",&iValue);
  
   iRet=CountFour(iValue);
  printf("%d",iRet);
   
    return 0;
}
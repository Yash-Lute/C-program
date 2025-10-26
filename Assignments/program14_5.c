#include<stdio.h>
int Count(int iNo)
{
    int idigit=0,iFrequency=0;
   while (iNo!=0)
   {
      idigit=iNo%10;
      iNo=iNo/10;
      if (idigit<6)
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
  
   iRet=Count(iValue);
  printf("%d",iRet);
   
    return 0;
}
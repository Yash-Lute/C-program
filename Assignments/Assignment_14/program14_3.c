#include<stdio.h>
int CountTwo(int iNo)
{
    int idigit=0,iFrequency=0;
   while (iNo!=0)
   {
      idigit=iNo%10;
      iNo=iNo/10;
      if (idigit==2)
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
  
   iRet=CountTwo(iValue);
  printf("%d",iRet);
   
    return 0;
}
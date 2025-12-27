#include<stdio.h>
int Difference(char *str)
{
    int iCnt1=0,iCnt2=0,iAns=0;
    while (*str!='\0')
    {
        if (*str>='a'&&*str<='z')
        {
            iCnt1++;
           
        }
        else
        {
            iCnt2++;
        }
         str++;
    }
   iAns=iCnt1-iCnt2;
    return iAns;
    
}
int main()
{
char arr[20];
int iRet=0;

printf("enter string:\n");
scanf("%[^\n]s",arr);

iRet=Difference(arr);

printf("%d",iRet);

    return 0;
}
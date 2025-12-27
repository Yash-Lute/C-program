#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkCapital(char ch)
{
    if ((ch>='A')&&(ch<='Z') )
    {
       return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}
int main()
{
 char cValue='\0';
BOOL bRet=FALSE;

 printf("enter the character");
 scanf("%c",&cValue);

 bRet=ChkCapital(cValue);

if (bRet==TRUE)
{
    printf(bRet);    
}
else
{
    printf(bRet);
}


    return 0;
}
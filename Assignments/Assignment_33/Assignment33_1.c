#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkApla(char ch)
{
    if (((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z')) )
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

 bRet=ChkApla(cValue);

if (bRet==TRUE)
{
    printf("TRUE");
}
else
{
    printf("FALSE");
}


    return 0;
}
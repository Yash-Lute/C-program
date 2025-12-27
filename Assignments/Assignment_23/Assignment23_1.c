#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL Check(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    BOOL bflag=FALSE;
    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt]==iNo)
        {
            bflag=TRUE;
            break;
        }
        
    }
    return bflag;
    
}
int main()
{
int iSize=0,iRet=0,iCnt=0,iValue=0;
int *p=NULL;
BOOL bRet=FALSE;

printf("enter no of elements :");
scanf("%d",&iSize);

printf("enter the number");
scanf("%d",&iValue);

p=(int *)malloc(iSize*sizeof(int));
if (p==NULL)
{
    printf("Unable to allocate memory");
    return -1;
}

printf("enter %d elements",iSize);
for ( iCnt = 0; iCnt < iSize; iCnt++)
{
    printf("enter element :%d  ",iCnt+1);
    scanf("%d",&p[iCnt]);
}

bRet=Check(p,iSize,iValue);

if (bRet==TRUE)
{
    printf("number is present");
}
else
{
     printf("number is not prsent");
}

free(p);



    return 0;
}

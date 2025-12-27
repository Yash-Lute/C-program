#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Check(int Arr[],int iLength)
{
    int iCnt=0;
    bool bflag=false;
    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt]==11)
        {
            bflag=true;
            break;
        }
        
    }

    return bflag;
    
}
int main()
{
    int iSize=0,iCnt=0;
    int *p=NULL;
    bool bRet=false;

    printf("enter no of elements:");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize*sizeof(int));
    if (p==NULL)
    {
        printf("Unable to allocate memory");
        return-1;
    }

    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %dst element : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    bRet=Check(p,iSize);

    if (bRet==true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);
    
    
    


    return 0;
}
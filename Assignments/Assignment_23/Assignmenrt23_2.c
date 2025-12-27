#include<stdio.h>
#include<stdlib.h>




int FirstOcc(int Arr[],int iLength,int iNo)
{
    int iCnt=0, iIndex=0;
   
    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt]==iNo)
        {
            iIndex=iCnt;
            break;
        }
        
    }
    return iIndex ;
    
}
int main()
{
int iSize=0,iRet=0,iCnt=0,iValue=0;
int *p=NULL;


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

iRet=FirstOcc(p,iSize,iValue);

printf("Output: %d",iRet);

free(p);



    return 0;
}

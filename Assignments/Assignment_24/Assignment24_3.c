#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int ilength)
{
    int iMin=0,iCnt=0,iMax=0,iAns=0;
    iMin=Arr[1];
    iMax=Arr[1];
    for ( iCnt = 0; iCnt < ilength; iCnt++)
    {
       if (Arr[iCnt]<iMin)
       {
          iMin=Arr[iCnt];
       }
       if (Arr[iCnt]>iMax)
       {
        iMax=Arr[iCnt];
       }
    }
    iAns=iMax-iMin;
    return iAns;
    
}
int main()
{

    int iSize=0,iCnt=0,iRet=0;
    int *p=NULL;
    printf("Enter the number of elements:");
    scanf("%d",&iSize);

    
    p=(int *)malloc(iSize*sizeof(int));
  if (p==NULL)
  {
    printf("Unable to allocate memory\n");
    return -1;
  }

  for ( iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("Enter element %d: ",iCnt+1);
    scanf("%d",&p[iCnt]);
  }
  
  iRet=Difference(p,iSize);

  printf("Difference is %d",iRet);

  free(p);

    return 0;
}
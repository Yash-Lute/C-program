#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[],int ilength)
{
    int iMax=0,iCnt=0;
    iMax=Arr[1];
    for ( iCnt = 0; iCnt < ilength; iCnt++)
    {
       if (Arr[iCnt]>iMax)
       {
          iMax=Arr[iCnt];
       }
       
    }
    return iMax;
    
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
  
  iRet=Maximum(p,iSize);

  printf("Largest number is %d",iRet);

  free(p);

    return 0;
}
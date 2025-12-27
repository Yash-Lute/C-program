#include<stdio.h>
#include<stdlib.h>
void Digits(int Arr[],int ilength)
{
   
    int iCnt=0,iCount=0,idigit=0,iNum=0;;
    for ( iCnt = 0; iCnt < ilength; iCnt++)
    {
       iCount=0;
       iNum=Arr[iCnt];
       while (iNum!=0)
       {
        idigit=iNum%10;
       iCount++;
       iNum=iNum/10;
       }
       if (iCount==3)
       {
         printf("%d\t",Arr[iCnt]);
       }
       
       
      
    }

    

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
  
  Digits(p,iSize);

  
  free(p);

    return 0;
}
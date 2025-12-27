#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int ilength)
{
    int ieven=0,iCnt=0,iodd=0,iAns=0;
    for ( iCnt = 0; iCnt < ilength; iCnt++)
    {
        if (Arr[iCnt]%2==0)
        {
            ieven++;
        }  
        else
        {
            iodd++;
        } 
    }
    iAns=iodd-ieven;

    return iAns;
    
}
int main()
{
int iSize=0,iRet=0,iCnt=0;
int *p=NULL;

printf("enter no of elements");
scanf("%d",&iSize);

p=(int *)malloc(iSize*sizeof(int));

if (p==NULL)
{
   printf("unable to allocate memory");
   return -1;
}

printf("enter %d elements\n",iSize);
for ( iCnt = 0; iCnt < iSize; iCnt++)
{
    printf("enter element : %d  ",iCnt+1);
    scanf("%d",&p[iCnt]);
}
iRet=Frequency(p,iSize);
printf("result is %d",iRet);

free(p);




    return 0;
}
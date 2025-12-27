#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength, int iStart,int iEnd)
{

    int iCnt=0;
    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt]>iStart && Arr[iCnt]<iEnd)
        {
          printf(" %d  ",Arr[iCnt]);
        }
        
    }
    
    
}



int main()
{
int iSize=0,iValue2=0,iCnt=0,iValue1=0;
int *p=NULL;


printf("enter no of elements :");
scanf("%d",&iSize);

printf("enter the starting point\n");
scanf("%d",&iValue1);

printf("enter the ending point\n");
scanf("%d",&iValue2);

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

Range(p,iSize,iValue1,iValue2);




free(p);



    return 0;
}

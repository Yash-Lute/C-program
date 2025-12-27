#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int  BOOL;
void DisplaySchedule(char chDiv)
{
    if (chDiv=='A'||chDiv=='a')
    {
       printf("your exam at 7AM");
    }
    else if (chDiv=='B'||chDiv=='b')
    {
         printf("your exam at 8:30AM");
    }
    else if (chDiv=='C'||chDiv=='c')
    {
        printf("your exam at 9:20AM");
    }
    else if (chDiv=='D'||chDiv=='d')
    {
        printf("your exam at 10:30AM");
    }
    else
    {
        printf("Invalid input\n please enter division correctly");
    }
    
    
    
    
}
int main()
{
  char cValue='\0';
  BOOL bRet=FALSE;

  printf("enter the character:\n");
  scanf("%c",&cValue);

  DisplaySchedule(cValue);

  

    return 0;
}
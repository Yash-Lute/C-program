#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0,j=0,iValue=0;
    char cValue='\0';
    for ( i = 1; i <= iRow; i++)
    {
        
        iValue=1;
        cValue='a';

        for ( j = 1; j <= iCol; j++)
        {
            
           if (i%2==0)
           {
              printf("%d\t",iValue);
              iValue++;
           }
           else 
           {
            printf("%c\t",cValue);
            cValue++;  
           }
           
            
        }
        printf("\n");
    }
    
}
int main()
{
int iValue1=0,iValue2=0;

printf("Enter number of rows and columns");
scanf("%d %d",&iValue1,&iValue2);

Pattern(iValue1,iValue2);

    return 0;
}
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    char cValue1='\0';
    char cValue2='\0';
    
    for ( i = 1; i <= iRow; i++)
    {
        cValue1='A';
        cValue2='a';
        for ( j = 1; j <=iCol; j++)
        {
            if (i%2==0)
            {
              printf("%c\t",cValue2);
               cValue2++;
            }
            else
            {
                
                printf("%c\t",cValue1);
               cValue1++;
            } 
        }
        printf("\n");
        
    }
    
}
int main()
{
int iValue1=0,iValue2=0;

printf("Enter no of rows and columns:");
scanf("%d %d",&iValue1,&iValue2);

Pattern(iValue1,iValue2);

    return 0;
}
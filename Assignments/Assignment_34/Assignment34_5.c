#include<stdio.h>

void Display(char ch)
{
   int iValue=ch;
   printf("Decimal : %d\n",iValue);
   printf("Hexadecimal : %x\n",iValue);
   printf("Octal : %o\n",iValue);

     
}
int main()
{
  char cValue='\0';
 
  printf("Enter the character : ");
  scanf("%c",&cValue);

  Display(cValue);
 

  
    return 0;
}
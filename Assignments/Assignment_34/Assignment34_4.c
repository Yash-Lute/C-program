#include<stdio.h>
#include<stdbool.h>
bool Display(char ch)
{
   char iCnt='\0';
   if (ch>='!'&&ch<='*'||ch=='^'||ch=='@')
   {
     return true;
   }
  else 
  {
     return false;
     
  }
 
  
      
 
    
}
int main()
{
  char cValue='\0';
  bool bValue=false;
  printf("Enter the character : ");
  scanf("%c",&cValue);

  bValue=Display(cValue);
 
  if (bValue==true)
  {
    printf("TRUE\n");
  }
  else
  {
    printf("FALSE\n");
  }
  
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#pragma pack (1)
struct node
{
  int data;
  struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
void InsertFirst(PPNODE first,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    newn->next=*first;
    *first=newn;

}
void Display(PNODE first)
{
    while (first!=NULL)
    {
        printf("|%d|->",first->data);
        first=first->next;
    }
    printf("NULL\n");
    
}
int Count(PNODE first)
{
    int iCount=0;
     while (first!=NULL)
    {
        iCount++;
        first=first->next;
    }
    return iCount;
}
int  AdditionEven(PNODE first)
{
    int iSum=0;
   while (first!=NULL)
   {
      if (first->data%2==0)
      {
        iSum=iSum+first->data;
      }
      
    first=first->next;
   }
   return iSum;
   
    
}


int main()
{
int iRet=0;
int iResult=0;
PNODE head= NULL;

InsertFirst(&head,11);
InsertFirst(&head,20);
InsertFirst(&head,32);
InsertFirst(&head,41);

Display(head);
iRet=Count(head);
printf("No of nodes are :%d\n",iRet);
iResult=AdditionEven(head);
printf("Addition of even nodes :%d\n",iResult);
    return 0;
}

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
int  SecMaximum(PNODE first)
{
    PNODE temp=first;
    int iMax=0;
    int iSecMax=0;
   while (first!=NULL)
   {
    iMax=first->data;
    if (first->data>iMax)
    {
        iMax=first->data;
    }
     
    first=first->next;
   }

   while (temp!=NULL)
   {
    iSecMax=temp->data;
     if (temp->data<iMax&& (temp->data)>iSecMax)
     {
       iSecMax=temp->data;
     }
     temp=temp->next;
     
   }
 
   
   return iSecMax;
   
    
}


int main()
{
int iRet=0;
int iResult=0;
PNODE head= NULL;

InsertFirst(&head,240);
InsertFirst(&head,320);
InsertFirst(&head,230);
InsertFirst(&head,110);

Display(head);
iRet=Count(head);
printf("No of nodes are :%d\n",iRet);
iResult=SecMaximum(head);
printf("2nd Maximum node :%d\n",iResult);
    return 0;
}

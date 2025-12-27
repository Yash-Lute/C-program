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
void DisplayPrime(PNODE first)
{
    int iCnt=0;
    int iCount=0;
    while (first!=NULL)
    {
        iCount=0;
        for ( iCnt = 1; iCnt <=first->data; iCnt++)
        {
            
            if (first->data%iCnt==0)
            {
               iCount++;
                  
            }

            
        }
         if (iCount==2)
               {
                 printf(" %d",first->data);
               }
         
        first=first->next;
    }
    
}


int main()
{
int iRet=0;
PNODE head= NULL;

InsertFirst(&head,89);
InsertFirst(&head,22);
InsertFirst(&head,41);
InsertFirst(&head,17);
InsertFirst(&head,20);
InsertFirst(&head,11);
Display(head);
iRet=Count(head);
printf("No of nodes are :%d\n",iRet);
DisplayPrime(head);
    return 0;
}

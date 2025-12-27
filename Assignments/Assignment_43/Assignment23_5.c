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
void  SumDigit(PNODE first)
{
    while (first!=NULL)
    {
        int iSum=0;
        int iDigit=0;
       int num=0;
       num=first->data;
       while (num!=0)
       {
         
        iDigit=(num)%10;
        iSum=iSum+iDigit;
        
        num=num/10;
       }
       printf("%d\t",iSum);
       
        first=first->next;
    }
    
}


int main()
{
int iRet=0;
int iResult=0;
PNODE head= NULL;
InsertFirst(&head,640);
InsertFirst(&head,240);
InsertFirst(&head,320);
InsertFirst(&head,230);
InsertFirst(&head,110);

Display(head);
iRet=Count(head);
printf("No of nodes are :%d\n",iRet);
SumDigit(head);

    return 0;
}

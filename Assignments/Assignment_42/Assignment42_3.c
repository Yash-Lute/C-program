#include<stdio.h>
#include<stdlib.h>

typedef struct node  NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

struct node
{
   int Data;
   struct node * Next;
};

void InsertFirst(PPNODE head,int no)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));
    newn->Data=no;
    
    if (*head==NULL)
    {
        *head=newn;
        newn->Next=NULL;
    }
    else
    {
       newn->Next=*head;
       *head=newn;
    } 
}

int Addition(PNODE Head)
{
    int iSum=0;
    
    while (Head!=NULL)
    {
        iSum=iSum+Head->Data;
        Head=Head->Next;
    }
    return iSum;
    
}

void Display(PNODE head)
{
    
    while (head!=NULL)
    {
       printf("|%d|->",head->Data);
       head =head->Next;
    }
   printf("NULL\n");

    
}


int main()
{
    int iRet=0;
   
    PNODE First=NULL;
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);
    

    Display(First);
    
iRet=Addition(First);


     printf("Addition of all nodes is :%d\n",iRet);



  
    return 0;
}
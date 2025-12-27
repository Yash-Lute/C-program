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

int Maximum(PNODE Head)
{
    int iMax=Head->Data;
    
    while (Head!=NULL)
    {
        if (Head->Data>iMax)
        {
            iMax=Head->Data;
        }
        
        Head=Head->Next;
    }
    return iMax;
    
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
    InsertFirst(&First,240);
    InsertFirst(&First,320);
    InsertFirst(&First,230);
    InsertFirst(&First,110);
    

    Display(First);
    
iRet=Maximum(First);


     printf("Maximum is :%d\n",iRet);



  
    return 0;
}
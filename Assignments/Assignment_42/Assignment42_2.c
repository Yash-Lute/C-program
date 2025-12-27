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

int SearchLastOcc(PNODE Head,int no)
{
    int index=0;
int temp=0;
    
    while (Head!=NULL)
    {
        index++;
        if ((Head)->Data==no)
        {
          temp=index;
        }
        Head=Head->Next;
    }
    return temp;
    
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
    int iNum=0;
    PNODE First=NULL;
    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,30);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,30);

    Display(First);
    printf("enter the element:");
    scanf("%d",&iNum);
iRet=SearchLastOcc(First,iNum);
if (iRet!=0)
{
     printf("index :%d\n",iRet);
}
else
{
    printf("element not found");
}

  
    return 0;
}
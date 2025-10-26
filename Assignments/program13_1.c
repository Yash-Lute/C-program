#include<stdio.h>
void print_number(int limit)
{
    int iCnt=0;
    if (limit<=0)
    {
        printf("Invalid input");
    }
    
    for ( iCnt = 1; iCnt <= limit; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    //  Time complexity:O(n)
}
int main()
{int limit=0;

    printf("enter number :");

    scanf("%d",&limit);
    print_number(limit);


    return 0;
}
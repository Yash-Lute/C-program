#include<stdio.h>
int sum_natura_numbers(int limit)
{
    int iCnt=0,iSum=0;
    if (limit<=0)
    {
        printf("Invalid input");
    }
    
    for ( iCnt = 1; iCnt <= limit; iCnt++)
    {
        iSum=iSum+iCnt;   
    }
    return iSum;
    // Time complexity:O(n)
    
}
int main()
{int limit=0;

    printf("enter number :");

    scanf("%d",&limit);
 printf("%d\n",sum_natura_numbers(limit)); 


    return 0;
}
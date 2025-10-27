#include<stdio.h>
void print_even_numbers(int limit)
{
    int iCnt=0;
    if (limit<=0)
    {
        printf("Invalid input");
    }
    
    for ( iCnt = 1; iCnt <= limit; iCnt++)
    {
        if (iCnt%2!=0)
        {
           printf("%d\t",iCnt);
        }
        
        
    }
    // Time complexity:O(n)
    
}
int main()
{int limit=0;

    printf("enter number :");

    scanf("%d",&limit);
    print_even_numbers(limit);


    return 0;
}
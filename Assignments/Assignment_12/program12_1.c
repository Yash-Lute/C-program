#include<stdio.h>
void print_factors(int number)
{
    int iCnt=0;
    if (number<=0)
    {
        printf("invalid input");
    }
    
    for ( iCnt = 1; iCnt <= number; iCnt++)
    {
        if (number%iCnt==0)
        {
            printf("%d\t",iCnt);
        }
        
    }
    // Time complexity:O(n)
}
int main()
{
int number=0;
 
printf("enter number :");
scanf("%d",&number);
print_factors(number);

    return 0;
}
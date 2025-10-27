#include<stdio.h>
int count_factors(int number)
{
    int iCnt=0, itotal=0;
    if (number<=0)
    {
        printf("invalid input");
    }
    
    for ( iCnt = 1; iCnt <= number; iCnt++)
    {
        if (number%iCnt==0)
        {
            itotal++;
        }
        
    }
    return itotal;
    // time complexity:O(n)
}
int main()
{
int number=0;
 
printf("enter number :");
scanf("%d",&number);
printf("%d\n",count_factors(number));


    return 0;
}
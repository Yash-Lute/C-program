#include<stdio.h>
int sum_of_factors(int number)
{
    int iCnt=0, iSum=0;
    if (number<=0)
    {
        printf("invalid input");
    }
    
    for ( iCnt = 1; iCnt <= number; iCnt++)
    {
        if (number%iCnt==0)
        {
            iSum=iSum+iCnt;
        }
        
    }
    return iSum;
    // time complexity:O(n)
}
int main()
{
int number=0;
 
printf("enter number :");
scanf("%d",&number);
printf("%d\n",sum_of_factors(number));


    return 0;
}
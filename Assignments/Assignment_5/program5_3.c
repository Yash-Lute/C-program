#include<stdio.h>
void CheckLeapYear(int year)
{
    if (year%4==0&&year%100==0&&year%400==0)
    {
        printf("%d is a leap year",year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }
    
}
int main()
{
    int yr;
    printf("enter year: ");
    scanf("%d",&yr);
    CheckLeapYear(yr);
    return 0;
}
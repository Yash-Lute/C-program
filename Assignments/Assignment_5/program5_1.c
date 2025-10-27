#include<stdio.h>
void  CheckEvenOdd(int num)
{
    if (num%2==0)
    {
        printf("%d is even number",num);
    }
    else
    {
        printf("%d is odd number",num);
    }
    
}
int main()
{
int number;

printf("enter number:");
scanf("%d",&number);

CheckEvenOdd(number);

    return 0;
}
#include<stdio.h>

int main()
{
    char Name[30];
    printf("please enter:");
    scanf("%[^\n]s",Name);
    printf("Your name is %s",Name);
    // Time complexity : O(1)
    return 0;

}
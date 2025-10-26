#include<stdio.h>
struct Demo
{
    int i;
    float f;
    char ch;
    double d;

};

int main()
{
   printf("size of structure : %d\n",sizeof( struct Demo));
   
   struct Demo obj1;
   obj1.ch='Y';
   printf("size of ch: %d\n",sizeof(obj1.ch));
   printf(" charcter: %c\n",obj1.ch);
   printf("size of object : %d\n",sizeof( obj1));


    return 0;
} 
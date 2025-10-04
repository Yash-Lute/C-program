#include<stdio.h>
struct Demo
{
    int i;
    float f;
    int j;
};
int  main()
{
    struct Demo obj;
    obj.i=11;
    obj.f=90.0f;
    obj.j=21;

    printf("%d\n",obj.i);   //11
    printf("%d\n",obj.j);  //90.4
    printf("%f\n",obj.f);  //21


    return 0;
}
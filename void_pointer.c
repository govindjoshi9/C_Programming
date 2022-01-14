#include<stdio.h>
void main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &b;
    printf("The valu of a is %f\n", *((float *)ptr  ));

}
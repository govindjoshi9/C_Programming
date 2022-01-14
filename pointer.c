#include<stdio.h>
void main()
{
    printf("Let learn about pointers\n");
    int a =76;
    int* ptra = &a ;
    printf("The vale of a is %p\n",ptra);
    printf("The vale of a is %x\n",ptra);
    printf("The vale of a is %d\n",*ptra);
}
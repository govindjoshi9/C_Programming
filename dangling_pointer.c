#include<stdio.h>
#include<stdlib.h>
int* functionDangling()
{
    int a,b;
    a =34;
    b = 356;
    sum = a+b;
    return &sum;
}
void main()
{
    //case 1 De allocation memory
    int *ptr = (int*) malloc(7*sizeof(int));
    ptr[0] = 15;
    ptr[1] = 12;
    ptr[2] = 56;
    ptr[3] = 3;
    free(ptr); //ptr is now a dangling pointer

    //case 2 function returning local variable address
    int * dangPtr = functionDangling();

    int * danglingPtr3;
    // case 3 if a variable gose out of scope
    {
        int a = 12;

        danglingPtr3 = &a;

    }
    // hear variable a gose out of scope which means dangling3 is pointing
    // to a location which is free and hance dangling Ptr3 is now dangling pointer

}
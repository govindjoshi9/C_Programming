#include <stdio.h>
void main()
{
    int a = 244;
    int *ptr = &a;
    if (ptr != NULL)
    {
        printf("The addres of a is %d\n", ptr);
    }
    else {
        printf("The pointer is a null pointer and cannot be dereferenced");
    }
}
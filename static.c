#include<stdio.h>
int func1(int b)
{
    static int myvar ;
    printf("The value of myvar is %d\n",myvar);
    myvar++;
    // printf("The address of b inside func1 is %d\n",&b);
    return b+myvar;
}
void main()
{
    int b = 344;
    // printf("The address of b inside main is %d\n",&b);
    int val = func1(b);
    val = func1(b);
    int *ptr = &val;

    // printf("The value of func1 is %d ",val);
}
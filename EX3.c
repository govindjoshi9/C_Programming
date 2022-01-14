#include<stdio.h>

int fib_recursive(int n)
{
    if(n==1 || n== 2)
        return n-1;
    else {
        return fib_recursive(n-1) + fib_recursive(n-2);
    }
    return 0;
}
int fib_itrative(int n)
{
    int a = 0;
    int b = 1;
    for(int i =0 ; i<n-1; i++)
    {
        b = a+b;
        a = b-a;
    }

    return a;
}

void main()
{
    int number;
    printf("Enter the indexibonacci serice\n");
    scanf("%d",&number);
    printf("The valu of fibonnaci number at postion no %d using iterative approach is %d\n",number,fib_itrative(number));
    printf("The valu of fibonnaci number at postion no %d using Recursive approach is %d\n",number,fib_recursive(number));

}

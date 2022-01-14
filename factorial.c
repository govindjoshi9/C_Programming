#include <stdio.h>
int factorial(int no)
{
    if (no == 1 || no == 0)
    {
        return 1;
    }
    else
    {
        return (no * factorial(no - 1));
    }
}
void main()
{
    int num;
    printf("Enter the no you want factorial\n");
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, factorial(num));
}

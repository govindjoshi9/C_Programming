#include <stdio.h>
#include <stdlib.h>
void main()
{
    int chars, i = 0;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d: Enter the number of charecters in your Employee id \n",i+1);
        scanf("%d", &chars);
        ptr = (char *)malloc((chars + 1) * sizeof(char));
        printf("Enter your employee id\n");
        scanf("%s",ptr);
        printf("Your Employee ID is %s\n",ptr);
        free(ptr);

        i = i + 1;
    }
}
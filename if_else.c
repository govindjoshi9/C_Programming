#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age");
    scanf("%d",&age);
    printf("your have entered %d as your age\n",age);
    if (age>=18)
    {
        printf("You can vote");
    }
    else if(age>10)
    {
        printf("You are   not kid");
    }   
    
    else{
        printf("You can not vote");
    }
    
    return 0;
}
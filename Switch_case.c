#include<stdio.h>
void main(){
    int age;
    printf("Enter your age");
    scanf("%d",&age);
    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        break;
    case 13:
        printf("The age is 13\n");
        break;
    case 23:
        printf("The age is 23\n");
        break;
    
    default:
        printf("Age is not");
        
    }
}
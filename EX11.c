#include<stdio.h>
#include<stdlib.h>
int isPalindrome(int num)
{
    int reversed = 0;
    int orignalNumber = num;
    while(num != 0)
    {
        reversed = reversed*10 + num%10;
        num = num/10;
    }
    printf("the reversed number is %d\n",reversed);
    if(orignalNumber == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
void main()
{
    int number;
    printf("Enter a number  to cheak whether it is a palindrome or not\n");
    scanf("%d",&number);
    if(isPalindrome(number))
    {
        printf("This number is a palindrom");
    }
    else{
        printf("This number is not a palindrome\n");
    }

}
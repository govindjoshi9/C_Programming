#include<stdio.h>

int reverse(int num){
    int rev =0,rem;
    while(num!=0){
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;

    }
    return rev;
}

int main(){
    int num = 23243;
    int rev = reverse(num);
    printf("The reverce no is %d",rev);
    return 0;
}
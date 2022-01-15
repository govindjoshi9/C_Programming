#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter the last natural number you want the sum of \n");
    scanf("%d",&n);
    //Runes in liner time
    // for (int i = 1; i <= num; i++)
    // {
    //     sum +=i;
    // }

    //Run in constaint time
    sum = (n*n+n)/2;
    printf("Sum of first %d natural number is: %d\n",n,sum);
    
    return 0;
}
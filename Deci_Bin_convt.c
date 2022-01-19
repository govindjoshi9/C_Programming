#include<stdio.h>

int main(){
    int n,i=0,rem,a[10];
    printf("Enter the no:\n");
    scanf("%d",&n);
    while(n){
        rem =n%2;
        n = n/2;
        a[i] = rem;
        i++;
    }
    for(int j = i-1; j>=0;j--){
        printf("%d",a[j]);
    }
    return 0;
}
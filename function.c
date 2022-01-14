#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
void printstare(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    
}
int takeno()
{
    int i;
    printf("Enter a no");
    scanf("%d",&i);
    return i;
}
void main(){
    int a,b,c;
    a =9;
    b =87;
    // c = sum(a,b);
    c = takeno();
    // printstare(7);
    printf("%d",c);
    
}
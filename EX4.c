#include<stdio.h>
void main()
{
    int n;
    printf("printing a pattern enter a no ");
    scanf("%d",&n);
    // for(int i=0 ; i<n; i++)
    // {
    //     for(int j =0 ; j<=i ; j++){
    //         printf("*");

    //     }
    // printf("\n");
    // }
    for(int i=0 ; i<n; i++)
    {
        for(int j =0 ; j<=n-i-1 ; j++){
            printf("*");

        }
    printf("\n");
    }
}
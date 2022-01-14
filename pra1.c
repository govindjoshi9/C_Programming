#include<stdio.h>
#include<stdlib.h>
void main()
{
    // int arr[2][3];
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("enter vale of 1st array");
    //     scanf("%d",&arr[i]);
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("the vale of array %d\n",arr[i]);
        
    // }
    int sum ,sub;

    int a[2][2], b[2][2], result[2][2],result2[2][2];
    printf("Enter First matrix");
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter second matrix");
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
  //for addition of matrix
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         sum += a[i][j] + b[i][j];
            
    //         result[i][j] = sum;
    //         sum=0;
    //     }

        //for substaction of matrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sub = a[i][j] - b[i][j];
            
            result2[i][j] = sub;
            sub=1;
        }
        
    }
    //  printf("Adition of matrix is \n");
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("%d\t",result[i][j]);
    //     }
    //     printf("\n");
        
    // }
    printf("Substration of matrix is \n");
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            printf("%d\t",result2[i][j]);
        }
        printf("\n");
        
    }
     
    

}
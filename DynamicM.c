#include<stdio.h>
#include<stdlib.h>
void main()
{
    // //Use of malloc
    // int *ptr;
    // int n;
    // printf("Enter the no of memory u want");
    // scanf("%d",&n);
    // ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the vale no %d of this array\n",i);
    //     scanf("%d",&ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("the vale at %d of this array %d\n",i,ptr[i]);
        
    // }
    

    //Use of calloc
    int *ptr;
    int n;
    printf("Enter the no of memory u want");
    scanf("%d",&n);
    ptr = (int *)calloc(n , sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the vale no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("the vale at %d of this array %d\n",i,ptr[i]);
        
    }
    
    //Use of realloc
   
    printf("Enter the no of new array  u want");
    scanf("%d",&n);
    ptr = (int *)realloc(ptr , n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the vale no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("the new vale at %d of this array %d\n",i,ptr[i]);
        
    }
    free(ptr);
    
}

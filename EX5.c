#include<stdio.h>
void arrayrev(int arr[])
{
    int tamp;
    for (int i = 0; i < 7/2; i++)
    {
        tamp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = tamp;
    }
    
}
void main()
{
    int arr[] = {1,2,3,4,5,6,67};
    printf("Before reversing the array\n");
    for(int i =0 ; i<7 ; i++)
    {
        printf("THe value of elemant %d is %d\n",i,arr[i]);

    }
    arrayrev(arr);

    printf("\nAfter reversing the array\n");
    for(int i =0 ; i<7 ; i++)
    {
        printf("THe value of elemant %d is %d\n",i,arr[i]);

    }


}
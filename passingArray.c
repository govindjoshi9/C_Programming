#include<stdio.h>
int func1(int array[])
{
    for(int i =0 ; i<5 ; i++)
    {
        printf("THe value of at %d is %d\n",i,array[i]);
    }
    // array[0] =234; we can chane the vale of array by using its addres 
}
void func2(int* ptr)
{
    for(int i =0 ; i<5 ; i++)
    {
        printf("THe value of at %d is %d\n",i,*(ptr+i));
    }
    *(ptr +2) = 345;
}
void main()
{
    int arr[] = {21,1,4,6,3};
    // printf("The value at index = is %d\n",arr[0]);
    // func1(arr);
    // printf("The value at index = is %d\n",arr[0]);
    func2(arr);
    func2(arr);

}
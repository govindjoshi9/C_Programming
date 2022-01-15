#include<stdio.h>

int returnMax(int array[], int n){
    int max =0;
    for (int i =0; i<n; i++){
        if(array[i]>max){
            max = array[i];
        }
    }
    return max;
}
int returnMin(int array[],int n){
    int min = array[0];
    for(int i =0; i<n; i++){
        if(array[i]<min){
            min = array[i];
        }
    }
    return min;
    
}

int main()
{
    int arr[] = {154,12,3,585,5,67,7854};
    int max = returnMax(arr,7);
    printf("The maximum elemant in this array is %d\n",max);
    int min = returnMin(arr,7);
    printf("The minimum elemant in this array is %d",min);
    return 0;

}
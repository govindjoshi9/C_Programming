#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    srand(time(NULL));
    printf("THe random number between 0 to 100 is %d\n",rand()%100);
}
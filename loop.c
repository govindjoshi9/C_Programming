#include<stdio.h>
void main()

{
    int num,index=1;
    printf("Enter a no");
    scanf("%d",&num);
    
    do 
    {
        printf("%d\n",index);

        index++;

    }while (index<num);
    
    
}
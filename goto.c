#include<stdio.h>
void main()
{
    // label:
    //     printf("We are inside label");
    //     goto end;
    // goto label;
    // end:
    //     printf("we at end");
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number enter 0 to exit\n");
            scanf("%d",&num);
            if(num==0){
                goto end;
            }
        }
        
    }
    
    end:
    



}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(int argc, char *argv[])
{
    char * opration;
    int num1, num2;
    opration = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    printf("Opration is %s\n",opration);
    printf("NUM1 is %d\n",num1);
    printf("Num2 is %d\n",num2);

    if(strcmp(opration, "add")==0){
        printf("%d\n",num1+num2);
    }
   else if(strcmp(opration, "sub")==0){
        printf("%d\n",num1 - num2);
    }
    else if(strcmp(opration, "Multiply")==0){
        printf("%d\n",num1 * num2);
    }
    else if(strcmp(opration, "divide")==0){
        printf("%d\n",num1/num2);
    }

}
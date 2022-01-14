#include<stdio.h>
int main(){
    int i,age;
    for(i=0; i<10;i++){
        printf("%d\n Enter your age\n",i);
        scanf("%d",&age);
        // if(age>10){
        //     break;
        // }
        if(age>10){
            continue;
        }
        printf("We cn not come hear");
        printf("We cn not come hear");
        printf("We cn not come hear");
        printf("We cn not come hear");
        printf("We cn not come hear");

    }
    return 0;
}
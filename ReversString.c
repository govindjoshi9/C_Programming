#include<stdio.h>

int main(){
    char s[] = "Govind";
    int len =0;
    char temp;
    while (s[len]!='\0')
    {
        len++;
    }
    printf("The length of this string is %d\n",len);
    for(int i =0 ; i<(len/2)-1;i++){
            temp = s[i];
            s[i] = s[len-1-i];
            s[len-1-i]=temp;
    }
    printf("String now is %s",s);
    
    return 0;
}
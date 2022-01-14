#include<stdio.h>
#include<string.h>
void printstr(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
}
    
}
void main()

{
    // char str[] = {'g', 'o', 'v','i','n','d','\0'};
    // char str[6] = "govind";
    char str[80];
    gets(str);
    printf("govind is a %s",)
    printstr(str);
}
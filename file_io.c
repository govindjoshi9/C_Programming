#include<stdio.h>

void main()
{
    FILE *ptr = NULL;
    // char string[34];
    ptr = fopen("myFile.txt","r+");
    // fscanf(ptr, "%s", string);
    // char c = fgetc(ptr);
    // printf("The charecter I read was %c\n",c);
    // c = fgetc(ptr);
    // printf("The charecter I read was %c\n",c);


    // char str[34];
    // fgets(str,5,ptr);
    // printf("The string is %s\n",str);

    fputc('o',ptr);
    fputs("this is file",ptr);

    fclose(ptr);

}

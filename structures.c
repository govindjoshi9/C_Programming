#include<stdio.h>
struct student
{
    int id;
    int mark;
    char fav_char;
    char name[34];
}govind,ravi,shubam;
void main()
{
    // struct student govind,ravi,shubam;
    govind.id =1;
    ravi.id = 2;
    shubam.id = 3;
    govind.mark = 345;
    ravi.mark = 241;
    shubam.mark = 355;
    govind.fav_char = 'r';
    ravi.fav_char = 'r';
    shubam.fav_char = 'r';
    strcpy(govind.name, "govind is good student");
    printf("Govind got %d marks\n",govind.mark);
    printf("Govind name is %s\n",govind.name);
    

}
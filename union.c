#include<stdio.h>
#include<string.h>
union student
{
    int id;
    int mark;
    char fav_char;
    char name[34];
};
void main()
{
    union student s1;
    s1.id = 1;
    strcpy(s1.name, "GOvind");
    s1.fav_char = 'r';
    s1.mark = 34;

    printf("the id is %d\n",s1.id);
    printf("the mark is %d\n",s1.mark);
    printf("the fav char is %c\n",s1.fav_char);
    printf("the nbame is %s\n",s1.name);


}
#include<Stdio.h>
int main(int argc, char const *argv[])
{
    printf("THe vale of argc is %d\n",argc);
    for (int i = 0; i < argc; i++)
    {
        printf("The argument number %d has value of %s\n",i,argv[i]);
    }
    
    return 0;
}

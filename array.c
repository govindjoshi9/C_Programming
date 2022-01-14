#include <stdio.h>
void main()
{
    int marks[2][4] = {{45, 234, 2, 3},
                       {3, 2, 4, 3}};
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the valu of %d element of the array\n",i);
    //     scanf("%d",&marks[i]);
    // }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("The valu of %d, %d element of the array is %d\n", i, j, marks[i][j]);
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }

    // marks[0] = 34;
    // printf("marks of student 1 is %d\n",marks[0]);
    // marks[0] = 644;
    // marks[1] = 44;
    // marks[2] = 34;
    // marks[3] = 36;
    // marks[4] = 324;
    // printf("marks of student 1 is %d\n",marks[0]);
}
#include <stdio.h>
struct Drivers
{
    char name[55];
    char dlNo[45];
    char route[47];
    int kms;
};

void main()
{
    struct Drivers d1, d2, d3;
    printf("Enter details of first Drivier\n");
    printf("Enter the name of first  drivers\n");
    scanf("%s", &d1.name);

    printf("Enter the dlno of first driver\n");
    scanf("%s", &d1.dlNo);

    printf("Enter the route of first driver\n");
    scanf("%s", &d1.route);

    printf("Enter the kms of first driver\n");
    scanf("%s", &d1.kms);


    printf("Enter details of Second Drivier\n");
    printf("Enter the name of Second  drivers\n");
    scanf("%s", &d2.name);

    printf("Enter the dlno of Second driver\n");
    scanf("%s", &d2.dlNo);

    printf("Enter the route of Second driver\n");
    scanf("%s", &d2.route);

    printf("Enter the kms of Second driver\n");
    scanf("%s", &d2.kms);


    printf("Enter details of thired Drivier\n");
    printf("Enter the name of thired  drivers\n");
    scanf("%s", &d3.name);

    printf("Enter the dlno of thired driver\n");
    scanf("%s", &d3.dlNo);

    printf("Enter the route of thired driver\n");
    scanf("%s", &d3.route);

    printf("Enter the kms of thired driver\n");
    scanf("%s", &d3.kms);

    printf("**********Printing information of drivers*******");
    printf("For Driver No 1:\n Name is %s\n", d1.name);
    printf(" DL no is %s\n", d1.dlNo);
    printf("Route  is %s\n", d1.route);
    printf(" KMS is %d\n", d1.kms);

    printf("For Driver No 2:\n Name is %s\n", d2.name);
    printf(" DL no is %s\n", d2.dlNo);
    printf("Route  is %s\n", d2.route);
    printf(" KMS is %d\n", d2.kms);

    printf("For Driver No 3:\n Name is %s\n", d3.name);
    printf(" DL no is %s\n", d3.dlNo);
    printf("Route  is %s\n", d3.route);
    printf(" KMS is %d\n", d3.kms);
}
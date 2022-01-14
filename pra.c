#include<stdio.h>
#include<string.h>
#define SIZE(arr)sizeof(arr)/sizeof(*arr)

void fun(int *arr, int n)
{
    int i;
    *arr += *(arr + n-1) +=10;

}
void printArr(int *arr, int n)
{
    int i;
    for(i =0; i<n ; ++i)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    // int i =5,*j,**k;
    // j = &i;
    // k = &j;
    // printf("%d%d%d",*j,**k,*(*k));

    // char str[] ="S\065AB";
    // printf("\n%d",sizeof(str));

    // typedef static int *i;
    // int j;
    // i a = &j;
    // printf("%d",*a);
    // return 0;

    // int a[] = {1,2,3,4,5,6};
    // int *ptr = (int*)(&a+1);
    // printf("%d",*(ptr-1));

    // typedef struct Student
    // {
    //     int rollno;
    //     int total;


    // }Student;
    // Student s1;
    // struct Student s1;

    // int x;
    // for ( x = 1; x <= 5; x++);
      //     printf("%d",x);

    // printf("%d",sizeof(5.2));
    

    // char c = '\08';
    // printf("%d",c);

    // int x;
    // for(x=-1; x<= 10 ; x++)
    // {
    //     if(x<5)
    //         continue;
    //     else
    //         break;
    //     printf("Univarsal");
    // }

    // int i =3;
    // switch (i)
    // {
    // case 0+1:printf("Geeks");
    //     break;
    // case 1+2: printf("Quiz");
    //     break;
    // default:printf("GeekQuiz");
    // }

    // int c =5 ,no=10;
    // do
    // {
    //     no/=c;

    // } while (c--);
    // printf("%d\n",no);

    
    // int i =0;
    // for(printf("1st\n"); i<2 && printf("2nd\n"); ++i && printf("3rd\n"))
    // {
    //     printf("*\n");

    // }

    // int arr[] = {10,20,30};
    // int size = SIZE(arr);
    // fun(arr,size);
    // printArr(arr,size);

    // char arr[] = "GeekQuiz";
    // printf("%s",?);

    
    // unsigned int i = 65000;
    // while(i++ != 0);
    // printf("%d",i);
    // return 0;

}
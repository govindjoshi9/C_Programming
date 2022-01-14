#include <stdio.h>
#define PI 3.14
#define Square(r) r*r
int main(){
    float var = PI;
    int r =4;
    printf("This is pi %f\n",var);
    printf("The area of this circle is %d\n",PI * Square(r));
}
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>





// int main()
// {
//      char *s[100]= {"One","Two","Three","Four","five","six","seven","Eight","nine"};
//     int n;
//     scanf("%d",&n);
//     if(n>=1 && n<=9){
//         printf("%s",s[n-1]);
//     }
//     else{
//         printf("Grater than 9")
//     }
//     return 0;
    
// }

// int main() {
	
//     int n,rem,temp,sum=0;
//     scanf("%d", &n);
    
//    while (n>0) {
//     sum += (n%10);
//     n = n/10; 
   
//     }
//     printf(sum);
    
//     //Complete the code to calculate the sum of the five digits on n.
//     return 0;
// }
int main() 
{

    int n;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}
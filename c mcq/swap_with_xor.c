#include <stdio.h>

int main(){

    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d %d\n",a,b);
    // After swapping with xor
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("%d %d\n",a,b);



    return 0;
}
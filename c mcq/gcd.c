#include <stdio.h>

void gcd(int c, int d){
    while(d!=1){
        if(c%d==0){
            printf("%d is gcd",d);
            break;
        }
        int temp = c;
        c = d;
        d = temp % d;
    }
    printf("1 is gcd");
}

int main(){

    int a,b;
    printf("Enter the two numbers to find gcd in between :");
    scanf("%d", &a);
    scanf("%d", &b);
    gcd(a,b);

    return 0;
}
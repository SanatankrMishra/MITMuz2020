#include <stdio.h>

int factorial(int num){
    if(num == 1){
        return 1;
    }
    return num * factorial(num-1);
}

int main(){

    int num = 12;
    printf("%d\n", factorial(num)/8);
    

    return 0;
}
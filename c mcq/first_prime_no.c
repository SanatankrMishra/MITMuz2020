#include <stdio.h>
#include <math.h>


int ifPrime(int no){
    for(int i=2; i<=sqrt(no);i++){
        if(i==no){
            return 1;
            break;
        }
        else if(no%i==0){
            return 0;
            break;
        }
    }
    return 1;
}

int main(){

    int num,count=0;
    printf("Enter the No. of prime numbers:");
    scanf("%d",&num);
    for(int j=2; count<num; j++){
        if(ifPrime(j)){
            count++;
            printf("%d\n",j);
        }
    }
    

    return 0;
}
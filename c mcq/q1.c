#include <stdio.h>

int find(int* arr,int size,int num){
    while (*(arr+(size/2))>num){
        size-- ;
    }
    while (*(arr+(size/2))<num){
        size++ ;
    }
    while (*(arr+(size/2))==num){
        return 1;
    }
    return 0;
}


int main(){

    // A = [82,38,29,64,20,48]
    // sor = [20,29,38,48,64,82]

    int sor[6] = {20,29,38,48,64,82}; int sp = 0; int i = 0;
    
    int vic=find(sor,6,29);
    if(vic==1){
        printf("The Number is found");
    }
    else{
        printf("The Number is not found");
    }
    


    return 0;
}
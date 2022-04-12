#include <stdio.h>


void bubble_sort(int *arr, int n){
    int i, j, temp;
    for(i = 0; i < n; i++){
        for(j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){

    int a[5] = {5,4,3,2,1};
    
    bubble_sort(a, 5);


    for(int i=0; i<5; i++){
        printf("%d ", a[i]);
    }


    return 0;
}
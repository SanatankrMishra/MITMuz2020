#include <stdio.h>


void bucket_sort(int *arr, int n){
    int i, j, k, l, m, r, temp;
    int bucket[n];
    for(i = 0; i < n; i++){
        bucket[i] = 0;
    }
    for(i = 0; i < n; i++){
        bucket[arr[i]]++;
    }
    for(i = 0, j = 0; i < n; i++){
        for(k = 0; k < bucket[i]; k++){
            arr[j] = i;
            j++;
        }
    }
}

int main(){

    int a[5] = {5,3,4,2,1};
    bucket_sort(a, 5);

    for(int i=0; i<5; i++){
        printf("%d ", a[i]);
    }


    return 0;
}
#include <stdio.h>

void insertion_sort(int *arr, int n){
        int i, j, temp;
        for(i = 1; i < n; i++){
            temp = arr[i];
            for(j = i - 1; j >= 0 && arr[j] > temp; j--){
                arr[j + 1] = arr[j];
            }
            arr[j + 1] = temp;
        }
    }


int main(){

    


    int a[5] = {5,4,3,2,1};
    insertion_sort(a,5);



    return 0;
}
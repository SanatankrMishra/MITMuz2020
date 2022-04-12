#include <stdio.h>

void partition(int *arr, int l, int r){
    int i, j, pivot;
    pivot = arr[l];
    i = l;
    j = r;
    while(i < j){
        while(arr[i] <= pivot && i < j){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    arr[l] = arr[j];
    arr[j] = pivot;
}

void quick_sort(int *arr, int l, int r){
    if(l < r){
        partition(arr, l, r);
        quick_sort(arr, l, r-1);
        quick_sort(arr, r+1, r);
    }
}

int main(){

    int a[8] = {57,47,89,93,17,65,9,22};
    quick_sort(a, 0, 7);
    for(int i=0; i<8; i++){
        printf("%d ", a[i]);
    }




    return 0;
}
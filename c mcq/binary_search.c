#include <stdio.h>

void binary_search(int *arr, int n, int x){
    int low = 0;
    int high = n - 1;
    int mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == x){
            printf("%d found at %d\n", x, mid);
            return;
        }
        else if(arr[mid] < x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    printf("%d not found\n", x);
}

int main(){

    int a[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    binary_search(a, 13, 14);


    return 0;
}
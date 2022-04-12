#include <stdio.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void selection_sort(int *a, int n){
    int j,temp;
    for(int i=0; i<n-1;i++){
        int isMin=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[isMin]){
                isMin=j;
            }
        }
        temp = a[i];
        a[i] = a[isMin];
        a[isMin] = temp;
        
    }
}

int main(){

    int a[] = {17, 19, 13, 33, 21, 2, 7};
    int n = 7;
    printArray(a, n);
    selection_sort(a, n);
    printArray(a, n);

    return 0;
}
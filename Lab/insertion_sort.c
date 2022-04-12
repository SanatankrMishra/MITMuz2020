#include <stdio.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insertion_sort(int *a,int n){
        int key,j;
        for(int i=1;i<=n-1;i++){
            key=a[i];
            j=i-1;
            while(j>=0 && a[j]>key){
                a[j+1]=a[j];
                j--;
            }
    	    a[j+1]=key;
        }
        
}


int main(){

    int a[] = {17, 19, 13, 33, 21, 2, 7};
    int n = 7;
    printArray(a, n);
    insertion_sort(a, n);
    printArray(a, n);

    return 0;
}
#include <stdio.h>
#include <limits.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int maximum(int *a,int n){
    int isMax=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>isMax){
            isMax=a[i];
        }
    }
    return isMax;
}


void count_sort(int *a, int n)
{
    int Max=maximum(a,n);
    int count[Max+1];
    for(int i=0;i<=Max;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    int i=0;
    int j=0;
    while(i<=Max){
        if(count[i]>0){
            a[j]=i;
            count[i]--;
            j++;
        }
        i++;
    }

}

void radix_sort(int *a,int n){
    int m = maximum(a,n);
    for(int k=1;m/k>0;k*=10){
        count_sort(a,n);
    }
}


int main(){

    int a[] = {17, 19, 13, 33, 21, 2, 7};
    int n = 7;
    printArray(a, n);
    radix_sort(a,n);
    printArray(a, n);

    return 0;
}
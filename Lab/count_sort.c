#include <stdio.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bucket_sort(int *a, int n)
{
    int bucket[n];
    for (int i = 0; i < n; i++)
    {
        bucket[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        bucket[a[i]]++;
    }
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < bucket[i]; j++)
        {
            a[index++] = i;
        }
    }
}


int main(){

    int a[] = {17, 19, 13, 33, 21, 2, 7};
    int n = 7;
    printArray(a, n);
    bucket_sort(a,n);
    printArray(a, n);

    return 0;
}
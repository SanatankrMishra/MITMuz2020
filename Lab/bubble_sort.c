#include <stdio.h>

int isSorted = 0;
void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubble_sort(int *a, int n)
{
    isSorted = 1;
    for (int i = 0; i < n - 1; i++)
    { // for passes
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                isSorted = 0;
            }
        }
    }
    if (isSorted)
    {
        return;
    }
}

int main()
{

    int a[] = {17, 19, 13, 33, 21, 2, 7};
    int n = 7;
    printArray(a, n);
    bubble_sort(a, n);
    printArray(a, n);

    return 0;
}
#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void Selectionsort(int arr[], int n)
{
    int i, j, mid_ind;

    for (i = 0; i < n - 1; i++)
    {
        mid_ind = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mid_ind])
            {
                mid_ind = j;
            }
        }
        if (mid_ind != 0)
        {
            swap(&arr[mid_ind], &arr[i]);
        }
    }
}

void printarray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int arr[] = {63, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    Selectionsort(arr, n);
    printf("Sorted array is:\n");
    printarray(arr, n);

    return 0;
}

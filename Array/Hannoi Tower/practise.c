#include <stdio.h>

int swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int sortarray(int arr[], int n)
{
    int i, j, idx;
    for (i = 0; i < n - 1; i++)
    {
        idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[idx])
            {
                idx = j;
            }
        }
        swap(&arr[idx], &arr[i]);
    }
}

int deleteduplicate(int arr[], int *n)
{
    int i, j, k;
    for (i = 0; i < (*n); i++)
    {
        for (j = i + 1; j < (*n); j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < (*n); k++)
                {
                    arr[k] = arr[k + 1];
                }
                (*n)--;
                j--;
            }
        }
    }
}

int printarray(int arr[], int n)
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
    int i, n;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sortarray(arr, n);
    printf("sorted array is:\n");
    printarray(arr, n);

    printf("Duplicate Deleted Array is:\n");
    deleteduplicate(arr, &n);
    printarray(arr, n);

    return 0;
}

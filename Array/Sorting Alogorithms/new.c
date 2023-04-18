#include <stdio.h>

int partiton(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;

            // swap
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = pivot;
    arr[high] = temp;

    return i; // pivot index
}

int quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pidx = partition(arr, low, high);
        quicksort(arr, low, pidx - 1);
        quicksort(arr, pidx + 1, high);
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the size of the array here:\n");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, n - 1);

    printarray(arr, n);
    return 0;
}

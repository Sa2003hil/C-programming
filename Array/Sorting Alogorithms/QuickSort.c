#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// Partition the array using the last element as the pivot
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1); // initially the the low value is -1

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]); // this swap is for pivot index
    return (i + 1);
}

// Function to implement Quick Sort
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivx = partition(arr, low, high);
        quickSort(arr, low, pivx - 1);
        quickSort(arr, pivx + 1, high);
    }
}

// Function to print the array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program
int main()
{
    // int arr[] = {10, 7, 8, 9, 1, 5};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n;
    printf("Enter the size of the array here: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    quickSort(arr, 0, n - 1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}

#include <stdio.h>

int maxnum(int arr[], int n);

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 622, 33, 984, 345};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The maximum number is: %d ", maxnum(arr, n));

    return 0;
}

int maxnum(int arr[], int n)
{
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

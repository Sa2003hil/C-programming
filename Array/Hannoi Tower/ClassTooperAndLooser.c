// program to find the second largest and second minimum value in the array and print their diffrence.

#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int i, n;
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max1 = INT_MIN, max2 = INT_MIN, min1 = INT_MAX, min2 = INT_MAX;

    for (i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2 && arr[i] != min1)
        {
            min2 = arr[i];
        }
    }

    printf("max2 = %d\nmin2 = %d\n", max2, min2);
    printf("%d", max2 - min2);

    return 0;
}

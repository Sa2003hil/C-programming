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

    int max = INT_MIN, max2 = INT_MIN;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max2 = max;
            max = arr[i];
        }
    }

    printf("max = %d\nsecond max = %d", max, max2);

    return 0;
}

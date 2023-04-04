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

    int min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX;

    for (i = 0; i < n; i++)
    {
        if (arr[i] < min1)
        {
            min3 = min2;
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2 && arr[i] != min1)
        {
            min3 = min2;
            min2 = arr[i];
        }
        else if (arr[i] < min3 && arr[i] != min2 && arr[i] != min1)
        {
            min3 = arr[i];
        }
    }

    printf("smallest = %d\n2nd Smallest = %d\n#rd Smallest = %d", min1, min2, min3);

    return 0;
}

#include <stdio.h>

int prefix(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int suffix(int arr[], int n)
{
    int sum2 = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        sum2 += arr[i];
    }
    return sum2;
}

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[100];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int mainsum = prefix(arr, n) + suffix(arr, n);

        printf("%d\n", mainsum);
    }

    return 0;
}

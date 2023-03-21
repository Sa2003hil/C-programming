#include <stdio.h>

int sumgirlsss(int arr[], int n)
{
    int sumgirl = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            // printf("%d ", arr[i]);
            sumgirl += arr[i];
        }
    }
    return sumgirl;
}

int sumboysss(int arr[], int n)
{
    int sumboys = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            // printf("%d ", arr[i]);
            sumboys = sumboys + arr[i];
        }
    }
    return sumboys;
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int m;
    scanf("%d", &m);

    // int sumb = sumboyss(arr, n);
    // int sumg = sumgirlsss(arr, n);
    // printf("%d", sumb);
    // printf("%d", sumg);
    if (m == 1)
    {
        printf("%d", sumgirlsss(arr, n));
    }

    if (m == 2)
    {
        printf("%d", sumboysss(arr, n));
    }

    return 0;
}

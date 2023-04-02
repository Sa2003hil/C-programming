#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m, i, j;

    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &m);
    int arr2[m];

    for (j = 0; j < m; j++)
    {
        scanf("%d", &arr2[j]);
    }

    i = j = 0;
    while (i < n && j < m)
    {
        if (arr[i] < arr2[j])
        {
            printf("%d ", arr[i]);
            i++;
        }

        else
        {
            printf("%d ", arr2[j]);
            j++;
        }
    }

    while (i < n)
    {
        printf("%d ", arr[i]);
        i++;
    }

    while (j < m)
    {
        printf("%d ", arr2[j]);
        j++;
    }

    return 0;
}

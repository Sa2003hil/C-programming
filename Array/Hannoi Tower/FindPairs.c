#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, find;

    scanf("%d", &n);
    scanf("%d", &find);

    int arr[n];
    int i, j;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == find)
            {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}

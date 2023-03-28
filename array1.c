#include <stdio.h>
#define maxx 1000

int main(int argc, char const *argv[])
{
    int n, max, min;
    scanf("%d", &n);

    int arr[maxx];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max1 = -1, max2 = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }

        else if (arr[i] > max2)
        {
            max2 = arr[i];
        }
    }
    printf("%d %d", max1, max2);

    return 0;
}

#include <stdio.h>
#define max 100

int main(int argc, char const *argv[])
{
    int i, j, n, count;
    scanf("%d", &n);

    int arr[max], freq[max];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (freq[i] == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

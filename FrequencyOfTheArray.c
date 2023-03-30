#include <stdio.h>
#define max 100
int main(int argc, char const *argv[])
{
    int arr[100], freq[100];
    int i, j, n, count;

    printf("Enter the size of the array here:\n");
    scanf("%d", &n);

    printf("Enter the elements here:\n");
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

    printf("The frequency of the array is :\n");
    for (i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}

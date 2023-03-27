#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int arr[4], freq[4] = {0};

        for (int i = 0; i < 4; i++)
        {
            scanf("%d", &arr[i]);
            freq[arr[i]]++;
        }

        for (int i = 0; i < 4; i++)
        {
            printf("Frequency of %d: %d\n", arr[i], freq[arr[i]]);
        }
    }
    return 0;
}

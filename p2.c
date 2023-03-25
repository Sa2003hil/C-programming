#include <stdio.h>

#define MAX_N 100
#define MAX_VAL 1000

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[MAX_N], freq[MAX_VAL] = {0};
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            freq[arr[i]]++;
        }

        int max_freq = 0;
        for (int i = 0; i < MAX_VAL; i++)
        {
            if (freq[i] > max_freq)
            {
                max_freq = freq[i];
            }
        }

        int mode = -1;
        for (int i = 0; i < MAX_VAL; i++)
        {
            if (freq[i] == max_freq)
            {
                mode = i;
                break;
            }
        }

        printf("%d\n", mode);

        int freq_2[MAX_N] = {0};
        for (int i = 0; i < n; i++)
        {
            freq_2[freq[arr[i]]]++;
        }

        for (int i = 1; i <= n; i++)
        {
            printf("%d ", freq_2[i]);
        }
        printf("\n");
    }

    return 0;
}

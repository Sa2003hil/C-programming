#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        int freq[100] = {0};
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            freq[arr[i]]++;
        }

        int maxfreq = 0;
        for (int i = 0; i < n; i++)
        {
            if (freq[arr[i]] > maxfreq)
            {
                maxfreq = freq[arr[i]];
            }
        }

        int countMax = 0;
        for (int i = 0; i < n; i++)
        {
            if (freq[arr[i]] == maxfreq)
            {
                countMax++;
            }
        }

        int minfreq = n + 1;
        for (int i = 0; i < n; i++)
        {
            if (freq[arr[i]] < minfreq && freq[arr[i]] == maxfreq)
            {
                minfreq = freq[arr[i]];
            }
        }

        if (countMax == n - countMax)
        {
            printf("%d\n", minfreq);
        }
        else
        {
            printf("%d\n", maxfreq);
        }
    }

    return 0;
}

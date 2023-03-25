#include <stdio.h>
#define max 100
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n], freq[max] = {0}, maxfreq = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            freq[arr[i]]++;
        }

        int c[1000] = {0};

        for (int i = 0; i < n; i++)
        {
            c[freq[i]]++;
        }

        // for (int i = 0; i < n; i++)
        // {
        //     if (freq[arr[i]] > maxfreq)
        //     {
        //         maxfreq = freq[arr[i]];
        //     }
        // }

        // printf("%d\n", maxfreq);

        for (int i = 0; i < n; i++)
        {
            printf("%d  %d\n", arr[i], freq[arr[i]]);
        }

        
        for (int i = 0; i < ; i++)
        {

            printf("%d\n", c[i]);
        }
    }
    return 0;
}

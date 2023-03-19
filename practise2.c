#include <stdio.h>
#define MAX_SIZE 100
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int arr[MAX_SIZE], maxele = 0, freq[MAX_SIZE] = {0}, maxfreq = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] > maxele)
        {
            maxele = arr[i];
            maxfreq = freq[arr[i]];
        }
    }
    printf("%d %d", maxele, maxfreq);

    return 0;
}

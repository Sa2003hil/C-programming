#include <stdio.h>
#define max 100
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int arr[max], evenarr[max], oddarr[max];
    int evencnt = 0, oddcnt = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenarr[evencnt] = arr[i];
            evencnt++;
        }

        else
        {
            oddarr[oddcnt] = arr[i];
            oddcnt++;
        }
    }

    for (int i = 0; i < evencnt; i++)
    {
        printf("%d ", evenarr[i]);
    }
    for (int i = 0; i < oddcnt; i++)
    {
        printf("%d ", oddarr[i]);
    }

    return 0;
}

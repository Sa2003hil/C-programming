#include <stdio.h>
#define max 100

void swaparr(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sortarr(int arr[], int n)
{
    int i, j, mid_idx;

    for (i = 0; i < n - 1; i++)
    {
        mid_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mid_idx])
            {
                mid_idx = j;
            }
        }

        swaparr(&arr[mid_idx], &arr[i]);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the size here:\n");
    scanf("%d", &n);

    int arr[max];

    printf("Enter the elements here:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sortarr(arr, n);

    printf("sorted array is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }

    int evenarr[max], oddarr[max];
    int evencnt = 0, oddcnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenarr[evencnt] = arr[i];
            evencnt++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            oddarr[oddcnt] = arr[i];
            oddcnt++;
        }
    }
    printf("Even elements array = \n");

    for (int i = 0; i < evencnt; i++)
    {

        printf("%d ", evenarr[i]);
    }

    return 0;
}

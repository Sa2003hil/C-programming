#include <stdio.h>
#define max 3

int main(int argc, char const *argv[])
{
    int i, j, n, sum = 0;

    int arr[max][max];

    for (i = 0; i < max; i++)
    {
        for (j = 0; j < max; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    i = j = 0;

    for (i = 0; i < max; i++)
    {
        for (j = 0; j < max; j++)
        {
            if (i == j) // this is the another formula  (i + j == (max + 1) - 2)
            {
                sum += arr[i][j];
            }
        }
    }

    printf("sum = %d", sum);

    return 0;
}

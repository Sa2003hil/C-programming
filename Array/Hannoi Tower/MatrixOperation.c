#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m, i, j;
    scanf("%d", &n);
    scanf("%d", &m);
    int arr[n][m];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                for (j = 0; j < m; j++)
                {
                    arr[i][j] = 0;
                }
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

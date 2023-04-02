#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum1 = sum1 + arr[j][i];
        }
        printf("%d ", sum1);
        sum1 = 0;
    }

    return 0;
}

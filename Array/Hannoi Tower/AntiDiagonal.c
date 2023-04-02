#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);
    int i, j;
    int arr[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    i = 0;
    j = m;
    m++;
    while (m != 0)
    {
        printf("%d ", arr[i][j]);
        m--;
        j--;
        i++;
    }
}

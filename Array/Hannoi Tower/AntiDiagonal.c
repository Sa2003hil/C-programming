#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int i, j;
    int arr[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j || i + j == 2)
            {
                printf("%d ", arr[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    getch();
}

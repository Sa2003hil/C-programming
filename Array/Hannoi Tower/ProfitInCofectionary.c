#include <stdio.h>
int isToeplitz(int arr[5][5])
{
    int i, j;
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j < 5; j++)
        {
            if (arr[i][j] != arr[i - 1][j - 1])
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t)
    {
        int arr[5][5];
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
        if (isToeplitz(arr))
        {
            printf("TRUE\n");
        }
        else
        {
            printf("FALSE\n");
        }
        t--;
    }
}

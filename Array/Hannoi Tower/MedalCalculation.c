#include <stdio.h>

int main()
{
    int n, c, m;
    scanf("%d %d %d", &n, &c, &m);

    int mat1[n][3], mat2[n][3];

    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Matrix 1\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("Matrix 2\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    int sum1 = 0, sum2 = 0;

    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         printf("%d\n", mat1[c - 1][m - 1]);
    //     }
    // }
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         printf("%d\n", mat2[c - 1][m - 1]);
    //     }
    // }

    printf("%d\n", mat1[c - 1][m - 1]);
    printf("%d\n", mat2[c - 1][m - 1]);
    sum1 += mat1[c - 1][m - 1];
    sum2 += mat2[c - 1][m - 1];

    printf("sum1 = %d, sum2 = %d\n", sum1, sum2);
    printf("%d\n", sum1 + sum2);

    return 0;
}

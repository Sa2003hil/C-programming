#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m;
    printf("enter the row size here:");
    scanf("%d", &n);

    printf("enter the coloumn size here:");
    scanf("%d", &m);

    int mat[n][m], i, j, sumr, sumc;

    printf("Enter the elements here \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("The elements are :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d \t", mat[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        sumr = sumc = 0;

        for (j = 0; j < m; j++)
        {
            sumr = sumr + mat[i][j];
            sumc = sumc + mat[j][i];
        }
        printf("The sum of rows is : %d\nThe sum of columns is : %d\n", sumr, sumc);
    }

    return 0;
}

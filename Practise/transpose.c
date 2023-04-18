#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mat[2][3], i, j;

    printf("Enter the elements of the given matrix\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("The given matrix is\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("The transpose of the given matrix is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", mat[j][i]);
        }
        printf("\n");
    }

    return 0;
}

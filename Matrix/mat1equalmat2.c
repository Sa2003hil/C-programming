#include <stdio.h>
#define max 3

int main(int argc, char const *argv[])
{
    int i, j;
    int arr1[max][max];
    int arr2[max][max];

    for (i = 0; i < max; i++)
    {
        for (j = 0; j < max; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < max; i++)
    {
        for (j = 0; j < max; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    int isequal = 1;

    for (i = 0; i < max; i++)
    {
        for (j = 0; j < max; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                isequal = 0;
                break;
            }
        }
    }

    if (isequal == 1)
    {
        printf("Yes the matrix is equal\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

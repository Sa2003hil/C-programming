#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the length of the array here:");
    scanf("%d", &n);

    int i, j, mat[n], even_arr, odd_arr;

    printf("Enter the elements here:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &mat[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (mat[i]  % 2 == 0)
            {
                printf("%d", mat[i]);
            }
        }
    }

    return 0;
}

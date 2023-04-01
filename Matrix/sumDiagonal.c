#include <stdio.h>
#define max 3
int main(int argc, char const *argv[])
{
    int row, col, sum = 0;

    int mat1[max][max];

    for (row = 0; row < max; row++)
    {
        for (col = 0; col < max; col++)
        {
            scanf("%d", &mat1[row][col]);
        }
    }

    for (row = 0; row < max; row++)
    {

        sum = sum + mat1[row][row];
    }

    printf("The sum is %d", sum);

    return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i, j;

    printf("Enter the number of stars :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

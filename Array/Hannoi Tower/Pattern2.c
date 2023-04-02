#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i, j;
    char alphabet = 'A';
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", alphabet);
                }
        ++alphabet;

        printf("\n");
    }

    return 0;
}

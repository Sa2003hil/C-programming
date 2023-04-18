#include <stdio.h>

void star(int n);

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the num here :");
    scanf("%d", &n);

    star(n);
    return 0;
}

void star(int n)
{
    int i, j;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, n;
    unsigned long long int fact = 1LL;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }

    printf("%d\n", fact);

    return 0;
}

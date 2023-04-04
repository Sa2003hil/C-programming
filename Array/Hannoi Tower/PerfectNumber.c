#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, n;
    scanf("%d", &n);

    int sum = 0;
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n && sum > 0)
    {
        printf("Perfect Number\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}

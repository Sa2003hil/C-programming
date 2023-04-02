#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, n;
    scanf("%d", &n);

    float sum = 0;

    for (i = 1; i <= n; i++)
    {
        float r = i;
        if (i % 2 == 0)
        {
            sum -= (1 / r);
        }
        else
        {
            sum += (1 / r);
        }
    }

    printf("%0.4lf", sum);

    return 0;
}

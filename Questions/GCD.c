// Program to find the GCD of two numbers in c

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);

    while (m != n)
    {
        if (m > n)
        {
            m = m - n;
        }
        else
        {
            n = n - m;
        }
    }
    printf("%d", m);
    return 0;
}

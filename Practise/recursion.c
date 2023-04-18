#include <stdio.h>

int sum(int n);

int main(int argc, char const
                       *argv[])
{
    int n;
    printf("enter the num here: ");
    scanf("%d", &n);

    printf("the sum is : %d", sum(n));
    return 0;
}

// recursive function

int sum(int n)
{
    // base condition
    if (n == 1)
    {
        return 1;
    }

    int sumnM1 = sum(n - 1);
    int sumN = sumnM1 + n;
    return sumN;
}
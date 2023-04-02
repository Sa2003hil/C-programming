#include <stdio.h>
#include <math.h>

int isperfectsquare(int x)
{
    int s = sqrt(x);
    return (s * s == x);
}

int isfibonnaci(int n)
{
    return isperfectsquare(5 * n * n + 4) || isperfectsquare(5 * n * n - 4);
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number here:\n");
    scanf("%d", &n);

    if (isfibonnaci(n))
    {
        printf("%d is a Fibonnaci Number", n);
    }
    else
    {
        printf("%d is not a Fibonnaci Number", n);
    }
    return 0;
}

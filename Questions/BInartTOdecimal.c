#include <stdio.h>
#include <math.h>

int convert(long long n);

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the binary number here:");
    scanf("%d", &n);
    printf("The binary is %d and decimal is %d", n, convert(n));

    return 0;
}

int convert(long long n)
{

    int i = 0, rem, sum = 0;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem * pow(2, i);
        n /= 10;
        ++i;
    }
    return sum;
}
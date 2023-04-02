#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num, i = 0;
    scanf("%d", &num);
    int rem, sum = 0;

    while (num != 0)
    {
        rem = num % 10;
        sum += rem * pow(2, i);
        num /= 10;
        ++i;
    }

    printf("%d\n", sum);
    return 0;
}

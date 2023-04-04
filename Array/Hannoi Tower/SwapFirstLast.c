#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, swapnum;
    scanf("%d", &n);

    int digit = (int)log10(n); // this gives length - 1

    int lastdigit = n % 10;
    int firstdigit = (int)(n / pow(10, digit));

    swapnum = lastdigit;
    swapnum *= (int)round(pow(10, digit));
    swapnum += n % ((int)round(pow(10, digit)));
    swapnum -= lastdigit;
    swapnum += firstdigit;

    printf("%d", swapnum);

    return 0;
}

#include <stdio.h>

int square(int x);

int main(int argc, char const *argv[])
{
    int x = 4;

    square(x);
    printf("Number : %d", x);

    return 0;
}

int square(int x)
{
    x = x * x;
    printf("Square : %d\n", x);
}
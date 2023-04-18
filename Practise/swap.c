#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 12;
    int b = 20;
    int c;

    printf("number a = %d\nnumber b = %d\n", a, b);
    a = c;
    a = b;
    c = b;
    printf("number a = %d\nnumber b = %d\n", a, b);

    return 0;
}

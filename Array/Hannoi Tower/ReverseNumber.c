#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int temp = n, rem = 0, rev = 0;

    while (temp != 0)
    {
        rem = temp % 10;
        rev = (rev * 10) + rem;
        temp /= 10;
    }

    printf("%d", rev);
    return 0;
}

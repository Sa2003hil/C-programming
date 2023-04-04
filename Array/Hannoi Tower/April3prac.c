#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, num = 0;
    scanf("%d", &n);

    while (n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }

    while (num != 0)
    {
        switch (num % 10)
        {
        case 0:
            printf("zero");
            break;
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        }
        num = num % 10;
    }

    return 0;
}

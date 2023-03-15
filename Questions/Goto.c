#include <stdio.h>

void printevenodd(int num);

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number here:");
    scanf("%d", &num);

    printevenodd(num);
    return 0;
}

void printevenodd(int num)
{
    if (num % 2 == 0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }

even:
    printf("%d is even number", num);
    return;

odd:
    printf("%d is odd number", num);
}

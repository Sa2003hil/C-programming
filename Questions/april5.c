#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, i, first, sec, last;

    first = 0;
    sec = 1;
    last = first + sec;

    scanf("%d", &num);

    printf("%d %d ", first, last);

    for (i = 3; i <= num; ++i)
    {
        printf("%d ", last);
        first = sec;
        sec = last;
        last = first + sec;
    }

    return 0;
}

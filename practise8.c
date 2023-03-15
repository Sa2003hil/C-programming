#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, rem, rev = 0, temp;
    int *pn, *pr;

    printf("Enter the num here:");
    scanf("%d", &num);

    pn = &num;
    pr = &rev;
    temp = *pn;

    while (*pn > 0)
    {
        rem = *pn % 10;
        *pr = (*pr * 10) + rem;
        *pn = *pn / 10;
    }

    if (temp == *pr)
    {

        printf("the given number is pallindrome ")
    }

    return 0;
}

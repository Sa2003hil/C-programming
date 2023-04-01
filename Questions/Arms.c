#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int i, num, rem = 0, res, onum, cnt = 0;

    printf("Enter the number here:\n");
    scanf("%d", &num);

    onum = num;

    while (onum != 0)
    {
        onum /= 10;
        ++cnt;
    }

    printf("%d\n", cnt);

    onum = num;
    res = 0;

    while (onum != 0)
    {
        rem = onum % 10;
        res += pow(rem, cnt);
        onum /= 10;
    }

    printf("%d\n", res);

    if (res == num)
    {
        printf("%d is an armstrong number");
    }
    else
    {
        printf("Not an armstrong number");
    }

    return 0;
}

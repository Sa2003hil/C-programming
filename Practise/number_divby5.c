#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i, j, div_5 = 0, not_div = 0, count = 0;
    // printf("Enter the length here:");
    // scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        if (i % 5 == 0)
        {
            count++;
            div_5 += i;
        }
        else
        {
            not_div += n;
        }
    }
    printf("The numbers divisible by 5 in the given range is %d\n", count);
    printf("The sum is =%d", div_5);

    return 0;
}

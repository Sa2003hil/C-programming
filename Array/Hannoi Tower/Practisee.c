#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char str[100];
    fgets(str, 100, stdin);

    int sum1 = 0, sum2 = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isdigit(str[i]))
        {
            if (i % 2 == 0)
            {
                sum1 += str[i] - '0';
            }
            else
            {
                sum2 += str[i] - '0';
            }
        }
    }
    printf("%d %d\n", sum1, sum2);
    printf("%d", sum1 - sum2);

    return 0;
}

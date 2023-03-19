#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    char str[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%c", &str[i]);
    }

    int count10 = 0, count01 = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            if ((str[i] - '0') ^ (str[i + 1] - '0') == '1')
            {
                count10++;
            }
        }
        else if (str[i] == '0')
        {
            if ((str[i] - '0') ^ (str[i + 1] - '0') == '1')
            {
                count01++;
            }
        }
    }

    printf("count of 01 = %d\ncount of 10 = %d", count01, count10);

    return 0;
}
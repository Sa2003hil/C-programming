#include <stdio.h>

int main(int argc, char const *argv[])
{
    int start, end, rev = 0, rem, temp;

    scanf("%d", &start);
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        temp = i;
        while (i != 0)
        {
            rem = temp % 10;
            rev = (rev * 10) + rem;
            temp = temp / 10;
        }

        if (temp == rev)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

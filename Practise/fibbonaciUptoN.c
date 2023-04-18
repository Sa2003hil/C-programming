#include <stdio.h>

int main(int argc, char const *argv[])
{
    int start, end, rev = 0, rem, temp;

    scanf("%d", &start);
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        temp = i;
        while (temp != 0)
        {
            rem = temp % 10;
            rev = (rev * 10) + rem;
            temp = temp / 10;
        }

        if (rev == i)
        {
            printf("%d ", i);
        }
        rev = 0;
    }

    return 0;
}

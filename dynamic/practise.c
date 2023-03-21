#include <stdio.h>

int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        char str[n];
        scanf("%s", str);
        int count1 = 0, count0 = 0;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == '1')
            {
                count1++;
            }
            else if (str[i] == '0')
            {
                count0++;
            }
        }
        // printf("%d %d", count0, count1);

        if (count1 > count0)
        {
            printf("%d\n", count1 - count0 + 2);
        }
        else if (count0 > count1)
        {
            printf("%d\n", count1 + 1);
        }

        else if (count1 = count0)
        {
            printf("%d\n", n);
        }
    }

    return 0;
}

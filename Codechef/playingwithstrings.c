#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[n + 1];
        char m[n + 1];
        int count1 = 0, count0 = 0, count2 = 0, count02 = 0;

        scanf("%s", s);
        scanf("%s", m);

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count1 += 1;
            }
            if (s[i] == '0')
            {
                count0 = count0 + 1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (m[i] == '1')
            {
                count2 += 1;
            }
            if (m[i] == '0')
            {
                count02 += 1;
            }
        }

        if (count1 == count2 && count0 == count02)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}

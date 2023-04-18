#include <stdio.h>

int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l, i, j, k, n;
        scanf("%d", &n);

        int a[n];
        int b[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }
        int max = 0;
        for (k = 0; k < n; k++)
        {
            if (a[k] > max)
            {
                max = a[k];
                // printf("%d\n", k + 1);
            }
        }
        // printf("%d\n", max);
        int max2 = 0;

        for (int k = 1; k < n; k++)
        {
            // printf("%d\n", a[k]);
            if (a[k] == max)
            {
                for (int i = 0; i < n; i++)
                {
                    if (b[i] > max2)
                    {
                        max2 = b[i];
                        printf("%d\n", i);
                    }
                }
            }
            else
            {
                printf("%d\n", k);
            }
        }
    }
    return 0;
}

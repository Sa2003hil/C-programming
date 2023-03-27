#include <stdio.h>

int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, p, q, r;
        scanf("%d %d %d %d %d %d", &a, &b, &c, &p, &q, &r);

        int avg = (p + q + r) / 2;
        int max1, max2, max;

        // Find the maximum of a and b
        if (a > b)
        {
            max1 = a;
            max2 = b;
        }
        else
        {
            max1 = b;
            max2 = a;
        }

        // Find the maximum of max1 and c
        int resa, resb;
        if (max1 > c)
        {
            // printf("The two maximum elements are %d and %d", max1, max2);
            resa = max1;
            resb = max2;
        }
        else
        {
            // printf("The two maximum elements are %d and %d", c, max1);
            resa = c;
            resb = max1;
        }

        if (p > q)
        {
            if (p > r)
            {
                max = p;
            }
            else
            {
                max = r;
            }
        }
        else
        {
            if (q > r)
            {
                max = q;
            }
            else
            {
                max = r;
            }
        }

        int mainsum = resa + resb + max;

        printf("avg %d\n", avg);

        printf("sum %d\n", mainsum);

        if (mainsum > avg)
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

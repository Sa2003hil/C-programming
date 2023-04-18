#include <stdio.h>

int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a1, b1;
        scanf("%d %d", &a1, &b1);

        int sum1 = a1 + b1;
        printf("%d\n", sum1);

        int a2, b2;
        scanf("%d %d", &a2, &b2);

        int sum2 = a2 + b2;
        printf("%d\n", sum2);

        int a3, b3;
        scanf("%d %d", &a3, &b3);

        int sum3 = a3 + b3;
        printf("%d\n", sum3);

        if (sum1 > sum2 && sum1 > sum3)
        {
            printf("%d\n", sum1);
        }
        else if (sum2 > sum1 && sum2 > sum3)
        {
            printf("%d\n", sum2);
        }
        else if (sum3 > sum1 && sum3 > sum2)
        {
            printf("%d\n", sum3);
        }
        }
    return 0;
}

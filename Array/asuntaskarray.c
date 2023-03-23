#include <stdio.h>

int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, k;

        scanf("%d %d %d", &a, &b, &k);

        int arr[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &arr[i]);
        }

        int count1 = 0;

        for (int i = 0; i < a; i++)
        {
            if (arr[i] == 1)
            {
                count1++;
            }
        }

        if (count1 == a)
        {
            printf("100\n");
        }
        else if (count1 == b)
        {
            printf("%d\n", k);
        }

        else
        {
            printf("0\n");
        }
    }
    return 0;
}

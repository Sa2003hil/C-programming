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
        int arr1[n];
        int arr2[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr2[i]);
        }

        int firstone = 0, lastone = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (arr1[i] == 1)
            {
                // printf("YES %d\n", i);
                firstone = 1;
            }
        }
        for (int i = n - 1; i > 1; i--)
        {
            if (arr1[i] == 1)
            {
                // printf("YES %d\n", i);
                lastone = 1;
            }
        }

        if (lastone && firstone == 1)
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

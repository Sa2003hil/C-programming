#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int count1 = 0, count2 = 0;
        // int leng = sizeof(arr)/sizeof(arr[0]);
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i + 1] - arr[i] <= 2)
            {
                printf("YES %d\n", i);
                count1++;
            }
            else
            {
                break;
            }
        }
        int max = 0, min = 0;
        if (count1 < max)
        {
            min = count1;
        }
        if (count1 > max)
        {
            max = count1;
        }
        // int min = n - count1;
        printf("%d %d\n", max + 1, min);

        // printf("%d %d", count1, count2);
        // printf("%d %d\n", min, max);
    }
    return 0;
}

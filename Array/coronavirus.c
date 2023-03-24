#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        int max = 0, min = 10;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < n; i++)
        {
            int count = 1;
            for (int j = i; j < n - 1; j++)
            {
                if (arr[j + 1] - arr[j] <= 2)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            i += count - 1;
            if (count > max)
            {
                max = count;
            }
            if (count < min)
            {
                min = count;
            }
        }
        printf("%d %d\n", min, max);
    }
    return 0;
}

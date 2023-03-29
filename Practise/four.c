#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] = arr[j])
            {
                printf("YES %d\n", i);
                cnt++;
            }
        }
    }

    // for (int i = 0; i < n; i++)
    // {

    //     /* code */
    // }
    printf("count = %d\n", cnt);

    return 0;
}

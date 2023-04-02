#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        printf("Enter the size of the array here:\n");
        scanf("%d", &n);

        int arr[n];
        int i, j;

        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    printf("%d\n", arr[i]);
                    break;
                    ;
                }
            }
            // if (j < n)
            // {
            //     break;
            // }
        }
    }

    return 0;
}

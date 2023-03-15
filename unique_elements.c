#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i, j;
    int a[n];

    printf("Enter the length of the array here");
    scanf("%d", &n);

    printf("Enter the elements of the array :");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] != a[j])
            {
                printf("%d", a[j]);
            }
        }
    }

    return 0;
}

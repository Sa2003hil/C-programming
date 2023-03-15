#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, n;
    int a[n];

    printf("Enter the length of the array here:");
    scanf("%d", &n);

    printf("Enter the elements of the array here:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {

                printf("the duplicate elements in the given array is : %d\n", a[j]);
            }
        }
    }
    return 0;
}

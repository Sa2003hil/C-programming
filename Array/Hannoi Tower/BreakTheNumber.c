#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, rem, temp;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        temp = arr[i];
        int sum = 0;
        while (temp != 0)
        {
            sum = (sum * 10) + temp % 10;
            temp /= 10;
        }

        while (sum > 0)
        {
            int digit = sum % 10;
            printf("%d ", digit);
            sum /= 10;
        }
    }
    printf("\n");

    return 0;
}

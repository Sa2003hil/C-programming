
#include <stdio.h>
#define max 100

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int arr[max];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int pos;
    scanf("%d", &pos);

    int ele;
    scanf("%d", &ele);

    for (int i = n; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos] = ele;

    n++;

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
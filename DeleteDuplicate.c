#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, n;

    printf("Enter the size here");
    scanf("%d", &n);

    int arr[100];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key;
    scanf("%d", &key);

    int index = n - 1;

    for (i = 0; i < index; i++)
    {
        if (arr[i] == key)
        {
            for (j = i + 1; j < index; i++)
            {
                arr[j - 1] = arr[j];
                i--;
                index--;
            }
        }
    }

    for (int i = 0; i < index; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, n;
    scanf("%d", &n);

    int arr[100];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int tosearch;
    printf("Enter the value to search\n");
    scanf("%d", &tosearch);

    int flag = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == tosearch)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Element %d found at %d position.", tosearch, i + 1);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    char arr[100];

    fgets(arr, 100, stdin);
    int vow_count = 0;
    int cons_count = 0;
    int space_count = 0;

    for (int i = 0; arr[i] != '\0'; ++i)
    {

        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
        {
            vow_count += 1;
        }
        else if (arr[i] > 'a' && arr[i] <= 'z')
        {
            cons_count += 1;
        }
        else if (arr[i] == ' ')
        {
            space_count += 1;
        }
    }
    printf("%d\n", vow_count);
    printf("%d\n", cons_count);
    printf("%d", space_count);
}

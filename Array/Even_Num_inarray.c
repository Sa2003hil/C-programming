#include <stdio.h>

int countoddnum(int arr[], int n);

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("%d", countoddnum(arr, 6));

    return 0;
}

int countoddnum(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)

    {
        if (arr[i] % 2 == 0)
        {
            count += 1;
        }
    }
    return count;
}
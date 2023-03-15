// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int n;
    int arr[n];
    printf("enter the range here:");
    scanf("%d", &n);

    int rem, sum = 0;

    for (int i = 0; i < n; i++)
    {
        int size = sizeof(arr) / sizeof(arr[0]);
        rem = arr[i] % 10;
        sum += pow(rem, size);
        i = i / 10;
        printf("%d", i);
    }

    return 0;
}
#include <stdio.h>

void main(int argc, char const *argv[])
{
    int n;
    printf("enter the length of the array :");
    scanf("%d", &n);

    int i, arr[n], even, odd = 0;

    printf("Enter the elements here:");
    for (i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
        {
            even = arr[i];
        }
        else

        {
            odd = arr[i];
        }
    }
    printf("even elements are : %d\n", even);
    printf("odd elements are : %d\n", odd);
}

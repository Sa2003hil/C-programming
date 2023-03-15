#include <stdio.h>

int main()
{
    int arr1[5], arr2[5], sum_arr[5], i;

    printf("Enter the elements of arrya 1 here ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr1);
    }
    printf("Enter the elements of array 2 here ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr2);
    }
    for (i = 0; i < 5; i++)
    {
        sum_arr[i] = arr1[i] + arr2[i];

        printf("The sum of array at index %d is %d\n", i, sum_arr[i]);
    }
}

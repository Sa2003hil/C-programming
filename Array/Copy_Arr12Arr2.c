#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, arr1[10], arr2[10];

    printf("enter the size of the array here :\n");

    scanf("%d", &n);

    printf("Enter the elements of array 1 here :");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("the elements of array2 is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr2[i]);
    }
}

// Union And Intersection of Two Arrays

#include <stdio.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void findUnion(int arr1[], int n1, int arr2[], int n2)
{
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            printf("%d ", arr1[i++]);
        }
        else if (arr2[j] < arr1[i])
        {
            printf("%d ", arr2[j++]);
        }
        else
        {
            printf("%d ", arr2[j++]);
            i++; // if there is same element in both of the array print one of the element from both of the array and increament Both i and j
        }
    }

    while (i < n1) // below both loops is for remaining elements
    {
        printf("%d ", arr1[i++]);
    }

    while (j < n2)
    {
        printf("%d ", arr2[j++]);
    }

    printf("\n");
}

void findIntersection(int arr1[], int n1, int arr2[], int n2)
{
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            j++;
        }
        else
        {
            printf("%d ", arr2[j++]);
            i++;
        }
    }

    printf("\n");
}

int main()
{
    int arr1[] = {1, 3, 4, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 3, 5, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Array 1: ");
    printArray(arr1, n1);

    printf("Array 2: ");
    printArray(arr2, n2);

    printf("Union: ");
    findUnion(arr1, n1, arr2, n2);

    printf("Intersection: ");
    findIntersection(arr1, n1, arr2, n2);

    return 0;
}

// Union Part
arr1[] = {1, 3, 4, 5, 7} arr2[] = {2, 3, 5, 6}

i = 0,
                         j = 0 arr1[i] = 1, arr2[j] = 2 // arr1[i] < arr2[j], so print arr1[i] = 1 and increment i
                                            i = 1,
                         j = 0 arr1[i] = 3, arr2[j] = 2 // arr1[i] > arr2[j], so print arr2[j] = 2 and increment j
                                            i = 1,
                         j = 1 arr1[i] = 3, arr2[j] = 3 // arr1[i] == arr2[j], so print arr2[j] = 3 and increment both i and j
                                            i = 2,
                         j = 2 arr1[i] = 4, arr2[j] = 5 // arr1[i] < arr2[j], so print arr1[i] = 4 and increment i
                                            i = 3,
                         j = 2 arr1[i] = 5, arr2[j] = 5 // arr1[i] == arr2[j], so print arr

                                            // Intersection Part

                                            arr1[] = {1, 3, 4, 5, 7} arr2[] = {2, 3, 5, 6}

                                            i = 0,
                         j = 0 arr1[i] = 1, arr2[j] = 2 // arr1[i] < arr2[j], so increment i
                                            i = 1,
                         j = 0 arr1[i] = 3, arr2[j] = 2 // arr1[i] > arr2[j], so increment j
                                            i = 1,
                         j = 1 arr1[i] = 3, arr2[j] = 3 // arr1[i] == arr2[j], so print arr2[j] = 3 and increment both i and j
                                            i = 2,
                         j = 2 arr1[i] = 4, arr2[j] = 5 // arr1[i] < arr2[j], so increment i
                                            i = 3,
                         j = 2 arr1[i] = 5, arr2[j] = 5 // arr1[i] == arr2[j], so print arr2[j] = 5 and increment both i and j
                                            i = 4,
                         j = 3

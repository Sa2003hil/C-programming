#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int freq[MAX_SIZE];
    int n, i, j, count, max_freq;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array to -1
    }

    // Calculate the frequency of each element using hashing
    max_freq = 0;
    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0; // Mark the element as visited
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count;
            if (freq[i] > max_freq)
            {
                max_freq = freq[i];
            }
        }
    }

    // Display the elements with the maximum frequency
    printf("\nElements with the maximum frequency:\n");
    for (i = 0; i < n; i++)
    {
        if (freq[i] == max_freq)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}

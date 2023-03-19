#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *ptr, *ptr1;
    int i, n;

    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL || ptr1 == NULL)
    {
        printf("Memory is not allocated\n");
        exit(0);
    }
    else
    {
        printf("Memory is allocated\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d\n", ptr[i]);
        }

        free(ptr);

        // ptr1 = (int *)calloc(2, sizeof(int));
        // for (int i = 0; i < 2; i++)
        // {
        //     printf("%d\n", ptr1[i]);
        // }
    }

    return 0;
}

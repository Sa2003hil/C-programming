#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int *ptr;
    int n, i;

    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory is not allocated");
    }
    else
    {
        printf("Memory is successfuly allocated\n");

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ptr[i]);
        }

        ptr = realloc(ptr, 8);

        printf("Enter number of new allocated memory\n");

        for (int i = 0; i < 8; i++)
        {
            scanf("%d", &ptr[i]);
        }
        for (int i = 0; i < 8; i++)
        {
            printf("%d\n", ptr[i]);
        }
    }

    return 0;
}

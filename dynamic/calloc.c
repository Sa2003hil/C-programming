#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int *ptr;
    int n;
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}

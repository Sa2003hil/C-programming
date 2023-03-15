#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("the value id : %d", **pptr);

    return 0;
}

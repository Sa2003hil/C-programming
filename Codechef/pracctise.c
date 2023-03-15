#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    a[2] = -1;
    printf("%d", a[2]);
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("\nAddress of %d is a[%d]", a[i], i);
    // }
    return 0;
}

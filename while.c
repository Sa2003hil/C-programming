#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int i = 0;
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}

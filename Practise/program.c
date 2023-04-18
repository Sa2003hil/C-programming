#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int sum = 0;
    printf("enter the num here:");
    scanf("%d", &n);

    printf("the numbers whose sum is printed is: \n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("the sum is :%d", sum);
    return 0;
}

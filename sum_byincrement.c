// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int n, i, m, sum = 0;

    printf("Enter the length here:");
    scanf("%d", &n);

    printf("Enter the number here:");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &m);
        m = m + 1;
        sum = sum + m;
    }
    printf("The sum is = %d", sum);

    return 0;
}
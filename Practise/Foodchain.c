#include <stdio.h>

int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, k;

        scanf("%d %d", &x, &k);
        int cnt = 1;
        int rem = x;

        while (rem != 0)
        {
            rem = rem / k;
            cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}

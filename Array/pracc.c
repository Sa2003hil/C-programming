#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    char str[n];
    scanf("%s", str);

    int count0 = 0, count1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            count1++;
        }
        else if (str[i] == '0')
        {
            count0++;
        }
    }

    printf("%d\n%d", count0, count1);

    return 0;
}

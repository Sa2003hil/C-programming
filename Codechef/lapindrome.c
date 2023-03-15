#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char str[100];
        scanf("%s", &str);

        int leng = strlen(str);

        if (leng % 2 == 0)
        {
            for (int i = 0; i <= leng / 2; i++)
            {
                printf("%s", str[i]);
            }
        }
    }

    return 0;
}

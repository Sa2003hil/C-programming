#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char str[100];
        scanf("%s", str);

        int leng = strlen(str);
        int count = 0;

        for (int i = 0; i < leng - 1; i++)
        {
            for (int j = i + 1; j < leng; j++)
            {
                if (str[i] != str[j])
                {
                    count++;
                }
            }
        }

        printf("%d\n", count);
    }
    return 0;
}

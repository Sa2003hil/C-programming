#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    char str[100];
    scanf("%s", str);
    int leng1 = strlen(str);

    int n;
    scanf("%d", &n);

    char str1[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", str1);
        for (int i = 0; i < leng1 - 1; i++)
        {

            for (int j = i + 1; j < leng1; j++)
            {
                if (str[i] > str[j])
                {
                    char temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
        }
        for (int i = 0; i < leng2 - 1; i++)
        {

            for (int j = i + 1; j < leng2; j++)
            {
                if (str1[i] > str1[j])
                {
                    char temp1 = str1[i];
                    str1[i] = str1[j];
                    str1[j] = temp1;
                }
            }
        }
    }

    printf("%s\n", str);
    printf("%s\n", str1);
    int result = strcmp(str1, str);
    if (result == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

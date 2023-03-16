#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int leng;
    scanf("%d", &leng);

    char a[100];
    scanf("%s", a);

    char str1, str2;

    for (int i = 0; i < leng / 2; i++)
    {
        // printf("%c", a[i]);
        strcpy(str1, a[i])
    }

    for (int i = leng / 2; i < leng; i++)
    {
        // printf("%c", a[i]);
        strcpy(str2, a[i])
    }

    printf("%s", str1);

    return 0;
}

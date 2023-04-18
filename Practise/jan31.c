#include <stdio.h>
int main(int argc, char const *argv[])
{

    char j = 'a';
    while (j++, j <= 'z')
    {
        printf("%c \n", j);
    }
    return 0;
}

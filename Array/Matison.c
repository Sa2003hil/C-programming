#include <stdio.h>
#include <string.h>

int main()
{
    char array[26];
    int i, sum = 0;
    char str[100];

    for (i = 0; i < 26; i++)
    {
        array[i] = 'a' + i;
    }

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; i < strlen(str); i++)
    {
        if (strchr(array, str[i]) == NULL)
        {
            sum += (str[i] - 'a' + 1);
        }
    }

    if (sum > 0)
    {
        printf("The sum of the missing character values is: %d\n", sum);
    }
    else
    {
        printf("The string contains all the characters from a to z.\n");
    }

    return 0;
}

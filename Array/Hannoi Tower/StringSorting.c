#include <stdio.h>
#include <string.h>

void main()
{
    int n;
    scanf("%d", &n);
    char fruits[n][10], temp[10];
    int i, j;

    printf("Enter the string here:\n");
    for (i = 0; i < n; i++)
    {
        gets(fruits[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(fruits[i], fruits[j]) > 0)
            {
                strcpy(temp, fruits[i]);
                strcpy(fruits[i], fruits[j]);
                strcpy(fruits[j], temp);
            }
        }
    }
    printf("After Sorting\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", fruits[i]);
    }
}

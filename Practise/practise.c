#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str[100];
    scanf("%s", str);

    int leng = strlen(str);
    int freq[10] = {0};

    for (int i = 0; i < leng; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            freq[str[i] - '0']++;
        }
    }
    for (int i = 0; i <= 9; i++)
    {
        printf("%d ", freq[i]);
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

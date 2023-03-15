#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num, flag;
    printf("Enter the number here:");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("%d is not a prime number\n", num);
        exit(1);
    }

    flag = 0;

    for (int i = 2; i < num / 2; i++)
    {
        if ((num % i == 0))
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }

    return 0;
}

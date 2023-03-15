#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    int flag = 0;

    printf("Enter the number here:");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        flag = 1;
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("number is not prime");
    }

    return 0;
}

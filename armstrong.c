#include <stdio.h>

int main()
{
    int num, orignalnum, remainder, result = 0;
    printf("Enter 3-digit num :");
    scanf("%d", &num);
    orignalnum = num;

    while (orignalnum != 0)
    {
        remainder = orignalnum % 10;
        result += remainder * remainder * remainder;
        orignalnum /= 10;
    }
    if (result = num)
    {
        printf("%d is a Armstrong number", num);
    }
    else
    {
        printf("%d Not a Armstrong number", num);
    }
    return 0;
}

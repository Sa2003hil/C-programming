#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, rem, rev = 0;
    printf("Enter the number here:");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }

    printf("The reverse of the given number is :%d", rev);
    return 0;
}

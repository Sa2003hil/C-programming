// Program to check wheather the number is pallindromic or not ? 
// Program to reverse the the given number ?


#include <stdio.h>

int main(int argc, char const *argv[])
{
    int rem, num, rev = 0;
    int *pr, *pn;

    printf("Enter the num here :");
    scanf("%d", &num);

    pr = &rev;
    pn = &num;
    int temp = *pn;

    while (num != 0)
    {

        rem = *pn % 10;
        *pr = (*pr * 10) + rem;
        *pn = *pn / 10;
    }

    if (temp == *pr)
    {
        printf("the given num is pallindrome");
    }
    else
    {
        printf("the num is not pallindromic");
    }
    return 0;
}

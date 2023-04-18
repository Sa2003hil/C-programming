#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, rev = 0, rem, temp;
    printf("Enter the num here: ");
    scanf("%d", &num);

    temp = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num /= 10;
    }
    if (temp == rev)
    {
        printf("%d is a pallindrome number", temp);
    }
    else
    {
        printf("%d is not a pallindrome number", temp);
    }

    return 0;
}
// python program to check pallindrome sequence...
// n = int(input())
// rev = 0
// x = n
// while n>0:
//     rem = n% 10
//     rev = (rev * 10)+rem
//     n = n//10
// if (x==rev):
//     print("Yes it is a pallindrome sequence")
// else :
//     print("no it is not")
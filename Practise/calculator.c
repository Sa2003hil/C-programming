#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, num1, num2;
    printf("Enter the operations here : 1 for '+' ,  2 for '-' , 3 for '*', 4 for '/' : \n");
    scanf("%d", &n);

    printf("Enter the num 1 here :");
    scanf("%d", &num1);

    printf("Enter the num 2 here :");
    scanf("%d", &num2);

    switch (n)
    {
    case 1:
        printf("%d + %d = %d", num1, num2, num1 + num2);

        break;
    case 2:
        printf("%d - %d = %d", num1, num2, num1 - num2);

        break;
    case 3:
        printf("%d * %d = %d", num1, num2, num1 * num2);

        break;
    case 4:
        printf("%d / %d = %d", num1, num2, num1 / num2);

        break;

    default:
        printf("the operation is invalid");
        break;
    }
    return 0;
}

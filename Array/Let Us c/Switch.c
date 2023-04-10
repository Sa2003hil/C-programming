#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number here (Enter 0 to exit):\n");
    scanf("%d", &num);

    while (num != 0)
    {
        int n;
        printf("Enter the number between 1 to 3\n1 is for FACTORIAL\n2 is for EVEN or ODD\n3 is for PRIME");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
        {
            int fact = 1;
            for (int i = 1; i <= num; i++)
            {
                fact *= i;
            }
            printf("Factorial of %d is %d\n", num, fact);
            break;
        }
        case 2:
            if (num % 2 == 0)
            {
                printf("%d is Even\n", num);
            }
            else
            {
                printf("%d is odd\n", num);
            }
            break;
        case 3:
            // Code for prime case
            break;
        default:
            printf("Invalid option\n");
            break;
        }

        printf("Enter the number here (Enter 0 to exit):\n");
        scanf("%d", &num);
    }
    return 0;
}

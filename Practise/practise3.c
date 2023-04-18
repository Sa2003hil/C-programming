// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     double x = 6.1, y = 4.8;

//     double result = pow(x, y);
//     printf("%.2lf", result);
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int marks;
//     printf("Enter your total marks here: ");

//     scanf("%d", &marks);

//     if (marks > 650)
//     {
//         printf("your grade is - A++");
//     }

//     else if (marks > 600 && marks < 650)
//     {
//         printf("your grade is A+");
//     }

//     else
//     {
//         printf("your grade is B");
//     }

//     return 0;
// }

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    do
    {
        printf("Enter num :");
        scanf("%d", &n);
        printf("%d \n", n);
        if (n % 2 != 0)
        {
            break;
        }
    } while (1);
    printf("Thank You !");
    return 0;
}

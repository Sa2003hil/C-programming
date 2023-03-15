// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     for (int i = 5; i <= 50; i++)
//     {
//         if (i % 2 == 0)
//         {
//             continue;
//         }
//         printf("%d \n", i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the num here :");
//     scanf("%d", &n);

//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     printf("The factorial is : %d", fact);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the num here :");
//     scanf("%d", &n);

//     for (int i = 10; i >= 1; i-- )
//     {
//         printf("%d \n", n * i);
//     }

//     return 0;
// }

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, n;
    printf("Enter the num here:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

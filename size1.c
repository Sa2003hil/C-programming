// #include <stdio.h>

// int main(void)
// {
//     int day;
//     printf("Enter day here (1-7) : ");
//     scanf("%d", &day);

//     switch (day)
//     {
//     case 1:
//         printf("Monday \n");
//         break;
//     case 2:
//         printf("Tuesday \n");
//         break;
//     case 3:
//         printf("Wednesday \n");
//         break;
//     case 4:
//         printf("Thrusday \n");
//         break;
//     case 5:
//         printf("Friday \n");
//         break;
//     case 6:
//         printf("Saturday \n");
//         break;
//     case 7:
//         printf("Sunday \n");
//         break;
//     default:
//         printf("Not a valid day \n");
//     }

//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int num;
//     printf("Enter the num here: ");
//     scanf("%d", &num);

//     if (num > 0)
//     {
//         printf("Positive\n ");
//         if (num % 2 == 0)
//         {
//             printf("Even\n");
//         }
//         else
//         {
//             printf("Odd");
//         }
//     }
//     else
//     {
//         printf("Negative");
//     }
//     return 0;
// }
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks;
    printf("Enter marks(0-100): \n");
    scanf("%d", &marks);

    if (marks <= 30)
    {
        printf("Fail\n");
    }
    else if (marks <= 100 && marks > 30)
    {
        printf("Pass \n");
    }
    else
    {
        printf("entered wrong marks");
    }

    return 0;
}

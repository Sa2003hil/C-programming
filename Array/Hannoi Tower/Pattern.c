//      1
//     232
//    34543
//   4567654

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, num;
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num - i; j++)
        {
            printf("%d", num);
        }
        printf("\n");
    }

    return 0;
}

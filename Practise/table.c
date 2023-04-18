#include <stdio.h>
int main()
{
    int num;
    printf("Enter table num here :");
    scanf("%d", &num);

    int pro;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", num * i);
    }
}
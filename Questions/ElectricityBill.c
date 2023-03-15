#include <stdio.h>
int main(int argc, char const *argv[])
{
    int units;
    printf("Enter the number of units consumed :\n ");
    scanf("%d", &units);

    int amount;

    if (units <= 50)
    {
        amount = units * 30;
    }
    else if (units <= 100)
    {
        amount = (50 * 30) + (units - 50) * 35;
    }
    else if (units <= 150)
    {
        amount = (50 * 30) + (50 * 35) + (units - 100) * 40;
    }
    else
    {
        amount = (50 * 30) + (50 * 35) + (50 * 40) + (units - 150) * 50;
    }

    printf("The total bill is : %d", amount);

    return 0;
}

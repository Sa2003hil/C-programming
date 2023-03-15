#include <stdio.h>

void calculatePrice(float value);

int main(int argc, char const *argv[])
{
    float value = 100.0;
    calculatePrice(value);
    return 0;
}

void calculatePrice(float value)
{
    value = value + (0.18 * value);
    printf("Final price is : %f", value);
}
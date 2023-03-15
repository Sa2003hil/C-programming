#include <stdio.h>

float calcarea(float side);

int main(int argc, char const *argv[])
{
    float side;
    scanf("%f", &side);
    printf("The area of square is : %f", calcarea(side));
    return 0;
}

float calcarea(float side)
{

    return (side * side);
}

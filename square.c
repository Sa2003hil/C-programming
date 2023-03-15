// #include <stdio.h>
// #include <math.h>

// float areacircle(float rad);

// int main(int argc, char const *argv[])
// {
//     float rad;
//     printf("enter the radius here :");
//     scanf("%f", &rad);

//     printf("the area of circle : %f", areacircle(rad));

//     return 0;
// }

// float areacircle(float rad)
// {
//     return 3.14 * rad * rad;
// }

#include <stdio.h>
#include <math.h>

float circlearea(float side);

int main()
{
    float side;
    scanf("%f", &side);
    printf("the area of circle is :%f", circlearea(side));
    return 0;
}

float circlearea(float side)
{
    return pow(side, 2);
}
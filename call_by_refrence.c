// Example 1

#include <stdio.h>

void myfunc(int *, int *);

int main(int argc, char const *argv[])
{
    int x = 5;
    int y = 6;

    myfunc(&x, &y);
    printf("Values in main function\n");
    printf("The value of x is %d\nthe value of y id %d", x, y);
    return 0;
}

void myfunc(int *x, int *y)
{
    *x = 7;
    *y = 8;
    printf("Values in definition function\n");
    printf("The value of x is %d\nthe value of y id %d\n", *x, *y);
}

// Example 2

// #include <stdio.h>
// void square(int *num);
// void _square(int num);

// int main()
// {
//     int num = 4;
//     // Call by refrence
//     square(&num);
//     printf("Number = %d \n", num);

//     // call by value
//     _square(num);
//     printf("Number =%d \n", num);

//     return 0;
// }

// void square(int *num)
// {
//     *num = (*num) * (*num);
//     printf("Square = %d\n", *num);
// }

// void _square(int num)
// {
//     num = num * num;
//     printf("Square = %d\n", num);
// }
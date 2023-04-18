#include <stdio.h>

/* Here '*' is used for describing the value of that address

  '&' is used for describing the memory location    */


int main(int argc, char const *argv[])
{
    int number = 22;
    int *ptr = &number;
    int _new = *ptr;

    printf("The value of the pointer is : %d\n", _new);
    printf("The value of the pointer is : %d\n", *ptr);
    printf("The value of the pointer is : %d", *(&number));

    return 0;
}

// int main(int argc, char const *argv[])
// {
//     int age = 19;
//     int *ptr = &age;

//     printf("%p\n", &age);
//     printf("%p\n", ptr);

//     return 0;
// }

#include <stdio.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main(int argc, char const *argv[])
{
    struct student cse = {121, 9.2, "sahil"};
    struct student *ptr = &cse;
    printf("with asterisk operator %s\n", (*ptr).name);

    // Introduction to arrow operator (->), it is used in place of  (*ptr).code <--------> ptr->code

    printf("with arrow operator %s\n", ptr->name);
    printf("%.2f\n", ptr->cgpa);
    printf("%d\n", ptr->roll);
    return 0;
}

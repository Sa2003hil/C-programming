#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main(int argc, char const *argv[])
{
    struct student ece[100];
    ece[0].roll = 1664;
    ece[0].cgpa = 9.9;
    strcpy(ece[0].name, "shradha");

    struct student cse[100];
    cse[0].roll = 1234;
    cse[0].cgpa = 9.9;
    strcpy(ece[0].name, "sahil");

    // this is the short way to store the elements in the structure in array  form

    struct student ecc = {122, 8.9, "kashish"};

    printf("name=%s\n", ece[0].name);
    printf("name=%s\n", cse[0].name);
    printf("name=%s\n", ecc.name);

    return 0;
}

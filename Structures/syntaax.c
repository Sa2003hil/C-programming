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
    struct student s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    strcpy(s1.name, "sahil");

    printf("student name = %s\n", s1.name);
    printf("student rollno = %d\n", s1.roll);
    printf("student name = %d\n", s1.cgpa);
    return 0;
}

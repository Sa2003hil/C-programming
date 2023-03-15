#include <stdio.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

void printinfo(struct student cse);
int main(int argc, char const *argv[])
{
    struct student cse = {121, 9.2, "sahil"};
    printinfo(cse);
    return 0;
}
void printinfo(struct student cse)
{
    printf("%d\n", cse.roll);
    printf("%f\n", cse.cgpa);
    printf("%s\n", cse.name);
}

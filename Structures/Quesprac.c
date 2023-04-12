#include <stdio.h>
#include <string.h>

struct student
{
    int roll_no;
    char name[30];
    char branch[40];
    int batch;
};

int main(int argc, char const *argv[])
{
    struct student s1;
    struct student *ptr = &s1;

    s1.roll_no = 27;
    strcpy(s1.name, "Sahil");
    strcpy(s1.branch, "Computer science & Engineering");
    s1.batch = 2023;

    printf("Roll N0 = %d\n", (*ptr).roll_no);
    printf("Name = %s\n", (*ptr).name);
    printf("Branch = %s\n", (*ptr).branch);
    printf("Batch = %d\n", (*ptr).batch);
    return 0;
}

/* This is another method to access the element in this pointer method (arrow method)

ptr->roll_no);
ptr->name);
ptr->branch);
ptr->batch);       */
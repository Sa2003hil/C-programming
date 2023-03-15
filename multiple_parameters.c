#include <stdio.h>
void myfunction(char name[], int age)
{
    printf("Hello %s you are %d years old", name, age);
}

int main(int argc, char const *argv[])
{
    myfunction("Sahil", 19);
    return 0;
}

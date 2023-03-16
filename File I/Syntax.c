#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr;
    fptr = fopen("newtext.txt", "w");
    fclose(fptr);
    return 0;
}

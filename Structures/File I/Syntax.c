#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr;
    fptr = fopen("newtext.txt", "w");  // it will automatically create a new file if that file does not exists.
    fclose(fptr);
    return 0;
}

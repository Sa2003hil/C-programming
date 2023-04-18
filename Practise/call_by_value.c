#include <stdio.h>

void swap(int x, int y);

int main(int argc, char const *argv[])
{
    int x = 3, y = 4;
    swap(x, y);

    printf("Before swap \nx = %d\ny = %d\n", x, y);
    return 0;
}

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("after swap \na=%d\nb=%d\n", x, y);
}
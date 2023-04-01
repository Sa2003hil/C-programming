#include <stdio.h>

void tower(int n, char beg, char aux, char end);

int main()
{
    int n;
    char a, b, c;
    printf("Enter the number of disc ");
    scanf("%d", &n);
    printf("Tower of hanoi of %d disc\n", n);
    tower(n, 'a', 'b', 'c');
}

void tower(int n, char beg, char aux, char end)
{
    if (n <= 0)
    {
        printf("\nillegal entry");
    }
    else if (n == 1)
    {
        printf("move disk from %c to %c\n", beg, end);
    }
    else
    {
        tower(n - 1, beg, end, aux);
        // tower(1, beg, aux, end);
        printf("move disk from %c to %c\n", beg, end);
        tower(n - 1, aux, beg, end);
    }
}
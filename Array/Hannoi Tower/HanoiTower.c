#include <stdio.h>

void tower(int n, char beg, char end, char aux)
{
    if (n <= 0)
    {
        printf("\n invalid number");
        return;
    }

    else if (n == 1)
    {
        printf("\n move disc 1 from %c to %c ", beg, end);
        return;
    }
    else
    {

        tower(n - 1, beg, aux, end);
        printf("\n move disc %d from %c to %c ", n, beg, end);
        // tower(1, beg, aux, end);
        tower(n - 1, aux, end, beg);
    }
}

int main()
{
    int N;
    char a, b, c; // this line not compulsary
    printf("enter the number of disc");
    scanf("%d", &N);
    printf("tower of hanoi of %d disc \n ", N);
    tower(N, 'a', 'c', 'b');
}

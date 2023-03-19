#include <stdio.h>
int fibonnaci(int n);

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    printf("%d", fibonnaci(n));
    return 0;
}

int fibonnaci(int n)
{

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int fibNm1 = fibonnaci(n - 1);
    int finNm2 = fibonnaci(n - 2);
    int result = fibNm1 + finNm2;
    return result;
}

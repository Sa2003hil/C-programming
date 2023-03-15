// Approach 1st using functions

#include <stdio.h>
int fibonnaci(int n);

int main(int argc, char const *argv[])
{
    printf("%d", fibonnaci(7));
    return 0;
}

int fibonnaci(int n)
{

    if (n == 0 || n == 1)
    {
        return n;
    }
   

    int fibNm1 = fibonnaci(n - 1);
    int finNm2 = fibonnaci(n - 2);
    int result = fibNm1 + finNm2;
    return result;
}

/******************************************************************************/
// Approach 2nd

// #include <stdio.h>
// int main()
// {
//     int t1, t2, nextterm, num, cnt;
//     scanf("%d", &num);

//     t1 = 0;
//     t2 = 1;
//     nextterm = t1 + t2;

//     if (num == 1)
//     {
//         printf("%d", t1);
//         return 0;
//     }
//     if (num == 2)
//     {
//         printf("%d", t2);
//         return 0;
//     }

//     for (int i = 1; i < num - 1; i++)
//     {
//         t1 = t2;
//         t2 = nextterm;
//         nextterm = t1 + t2;
//     }
//     printf("%d", t2);
//     return 0;
// }
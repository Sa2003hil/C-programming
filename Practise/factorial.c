// program to calculate factorial of the given number -->

#include <stdio.h>

int fact(int n);

int main()
{

    printf("the factorial is : %d", fact(4));
    return 0;
}

int fact(int n)
{

    if (n == 0)
    {
        return 1;
    }

    int factNm1 = fact(n - 1);
    int factN = factNm1 * n;
    return factN;
}

//**********************************************************************************************

program to convert celcius to farnehite

#include <stdio.h>

    float
    conv(float cel);

int main(int argc, char const *argv[])
{
    float farnehite = conv(0);
    printf("degree farnehite = %f", farnehite);

    return 0;
}

float conv(float cel)
{

    float farnehite = (cel * 0.18) + 32;
    return farnehite;
}

//**********************************************************************************************

#include <stdio.h>

int calcmarks(int che, int phy, int math);

int main(int argc, char const *argv[])
{
    int che = 90;
    int phy = 99;
    int math = 94;

    printf("The percentage is : %d", calcmarks(che, phy, math));

    return 0;
}

int calcmarks(int che, int phy, int math)
{
    return ((che + phy + math) / 3);
}

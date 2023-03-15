// function with arguments and without return value

// Example 1 :

#include <stdio.h>

void printtable(int n);

int main()
{
    int n;
    printf("Enter a positive number here: ");
    scanf("%d", &n);

    printtable(n); // argument (n) ---->   calling function
    return 0;
}

void printtable(int n) // parameter (n)
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d \n", n * i);
    }
}

// Example 2 : print star pattern

#include <stdio.h>

void printstar(int n);

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter num here :");
    scanf("%d", &n);

    printstar(n);

    return 0;
}

void printstar(int n)
{
    int i, j;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// function with return value and argument

#include <stdio.h>

int sum(int a, int b);

int main(int argc, char const *argv[])
{
    int a, b;
    printf("enter value of a : ");
    scanf("%d", &a);

    printf("Enter value of b : ");
    scanf("%d", &b);

    int s = sum(a, b);
    printf("The sum is : %d", s);
    return 0;
}

int sum(int x, int y)
{
    return x + y;
}
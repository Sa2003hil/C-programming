// #include <stdio.h>

// void namaste();
// void bonjour();

// int main()
// {
//     printf("Enter f for french & i for Indian :");
//     char ch;
//     scanf("%c", &ch);

//     if (ch == 'i')
//     {
//         printf("Namste");
//     }
//     else
//     {
//         printf("Bonjour");
//     }

//     return 0;
// }

// void namaste()
// {
//     printf("Namste \n");
// }

// void bonjour()
// {
//     printf("Bonjour \n");
// }

#include <stdio.h>

int sum(int a, int b);

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter number a :");
    scanf("%d", &a);

    printf("Enter number b : ");
    scanf("%d", &b);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

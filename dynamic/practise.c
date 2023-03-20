// C program to count the number of
// vowels and consonants in a string

#include <stdio.h>
#include <string.h>

// Function to count number
// of vowels and consonant
void count_vowels_and_consonant(char *str)
{
    // Declare the variable vowels and consonant
    int vowels = 0, consonants = 0;

    int i;
    char ch;

    // Take each character from this string to check
    for (i = 0; str[i] != '\0'; i++)
    {

        ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowels++;

        else if (ch == ' ')
            continue;

        else

            consonants++;
    }

    // Print the total count of vowels and consonants
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
}

// Driver function.
int main()
{
    // char *str = "geeks for geeks";
    // printf("String: %s", str);
    char str[100];
    fgets(str, 100, stdin);

    count_vowels_and_consonant(str);

    return 0;
}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct Library
{
    int accessionNumber;
    char bookTitle[50];
    char bookAuthor[50];
    float bookPrice;
    int bookissued;
};

int main(int argc, char const *argv[])
{
    struct Library mylibrary[100];
    int totalBooks = 0;
    int choise = -1;
    int index = -1;
    int i;
    int accessionNumberTarget;
    char bookAuhtorTarget[50];
    char bookTitleTarget[50];

    while (choise != 7)
    {
        if (choise == 1)
        {
            // display main menu
            printf("1. Add book information\n");
            printf("2. Display book information\n");
            printf("3. List all books of given author\n");
            printf("4. List the title of specified book\n");
            printf("6. List the books in order of accession number\n");
            printf("7. Exit\n");
            printf("Your Choise: ");
            scanf("%d", &choise);

            if (choise == 1)
            { // Add book inforrmation

                printf("Enter the book accession number: ");
                scanf("%d", &mylibrary[totalBooks].accessionNumber);
                fflush(stdin);
                printf("Enter the book titile: ");
                gets(mylibrary[totalBooks].bookTitle);
                printf("Enter the book Author: ");
                gets(mylibrary[totalBooks].bookAuthor);
                printf("Enter the book price: ");
                scanf("%f", &mylibrary[totalBooks].bookPrice);
                mylibrary[totalBooks].bookissued = -1;
                while (mylibrary[totalBooks].bookissued != 1 && mylibrary[totalBooks].bookissued != 0)
                {
                    printf("Is book is issued? 1 - yes , 0 - no: ");
                    scanf("%d", &mylibrary[totalBooks].bookissued);
                }
                totalBooks++;
                printf("\n\n A new book is added successfully.\n\n");
            }

            else if (choise == 2)
            {
                        }
        }
    }

    return 0;
}

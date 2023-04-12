#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

// Create a structure called library to hold accession number, title of the book, author name,  price of the book, and flag indicating whether book is issued or not.
struct Library
{
    int accessionNumber;
    char bookTitle[50];
    char bookAuthor[50];
    float bookPrice;
    int bookIsIssued;
};

void sortBooksInOrderAccessionNumber(struct Library myLibrary[], int size)
{
    int i, j, indexmin;
    struct Library temp;
    for (i = 0; i < size - 1; i++)
    {
        indexmin = i;
        for (j = i + 1; j < size; j++)
            if (myLibrary[j].accessionNumber < myLibrary[indexmin].accessionNumber)
                indexmin = j;

        temp = myLibrary[i];
        myLibrary[i] = myLibrary[indexmin];
        myLibrary[indexmin] = temp;
    }
}

int main(void)
{
    struct Library myLibrary[100];
    int totalBooks = 0;
    int choice = -1;
    int index = -1;
    int i;
    int accessionNumberTarget;
    char bookAuthorTarget[50];
    char bookTitleTarget[50];

    while (choice != 7)
    {
        // display main menu
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of specified book\n");
        printf("5. List the count of books in the library\n");
        printf("6. List the books in the order of accession number\n");
        printf("7. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        { // Add book information
            printf("Enter the book accession number: ");
            scanf("%d", &myLibrary[totalBooks].accessionNumber);
            fflush(stdin);
            printf("Enter the book title: ");
            gets(myLibrary[totalBooks].bookTitle);
            printf("Enter the book author: ");
            gets(myLibrary[totalBooks].bookAuthor);
            printf("Enter the book price: ");
            scanf("%f", &myLibrary[totalBooks].bookPrice);
            myLibrary[totalBooks].bookIsIssued = -1;
            while (myLibrary[totalBooks].bookIsIssued != 1 && myLibrary[totalBooks].bookIsIssued != 0)
            {
                printf("Is the book issued? 1 - yes, 0 - no: ");
                scanf("%d", &myLibrary[totalBooks].bookIsIssued);
            }
            totalBooks++;
            printf("\n\nA new book has been added successfully.\n\n");
        }
        else if (choice == 2)
        { // Display book information
            if (totalBooks == 0)
            {
                printf("\nThe library is empty.\n\n");
            }
            else
            {
                index = -1;
                printf("Enter the book accession number to display: ");
                scanf("%d", &accessionNumberTarget);
                for (i = 0; i < totalBooks; i++)
                {
                    if (myLibrary[i].accessionNumber == accessionNumberTarget)
                    {
                        index = i;
                    }
                }
                if (index != -1)
                {
                    printf("\n%-20s%-20s%-20s%-20s%-20s\n", "Accession Number", "Book title", "Book author", "Book price", "Book is issued");
                    printf("%-20d%-20s%-20s%-20.2f%-20d\n\n", myLibrary[index].accessionNumber, myLibrary[index].bookTitle, myLibrary[index].bookAuthor, myLibrary[index].bookPrice, myLibrary[index].bookIsIssued);
                }
                else
                {
                    printf("\nThe book does not exist.\n\n");
                }
            }
        }
        else if (choice == 3)
        { // List all books of given author
            if (totalBooks == 0)
            {
                printf("\nThe library is empty.\n\n");
            }
            else
            {
                fflush(stdin);
                printf("Enter the book author to list: ");
                gets(bookAuthorTarget);
                index = -1;
                printf("\n\n%-20s%-20s%-20s%-20s%-20s\n", "Accession Number", "Book title", "Book author", "Book price", "Book is issued");
                for (i = 0; i < totalBooks; i++)
                {
                    if (strcmp(myLibrary[i].bookAuthor, bookAuthorTarget) == 0)
                    {
                        index = i;
                        printf("%-20d%-20s%-20s%-20.2f%-20d\n", myLibrary[i].accessionNumber, myLibrary[i].bookTitle, myLibrary[i].bookAuthor, myLibrary[i].bookPrice, myLibrary[i].bookIsIssued);
                    }
                }
                if (index == -1)
                {
                    printf("\nThe books do not exist.\n\n");
                }
            }
        }
        else if (choice == 4)
        { // List the title of specified book
            if (totalBooks == 0)
            {
                printf("\nThe library is empty.\n\n");
            }
            else
            {
                fflush(stdin);
                printf("Enter the book title to list: ");
                gets(bookTitleTarget);
                index = -1;
                printf("\n\n%-20s%-20s%-20s%-20s%-20s\n", "Accession Number", "Book title", "Book author", "Book price", "Book is issued");
                for (i = 0; i < totalBooks; i++)
                {
                    if (strcmp(myLibrary[i].bookTitle, bookTitleTarget) == 0)
                    {
                        index = i;
                        printf("%-20d%-20s%-20s%-20.2f%-20d\n", myLibrary[i].accessionNumber, myLibrary[i].bookTitle, myLibrary[i].bookAuthor, myLibrary[i].bookPrice, myLibrary[i].bookIsIssued);
                    }
                }
                if (index == -1)
                {
                    printf("\nThe books do not exist.\n\n");
                }
            }
        }
        else if (choice == 5)
        { // List the count of books in the library
            if (totalBooks == 0)
            {
                printf("\nThe library is empty.\n\n");
            }
            else
            {
                printf("\nThe total number of books in the library: %d\n\n", totalBooks);
            }
        }
        else if (choice == 6)
        { // List the books in the order of accession number
            if (totalBooks == 0)
            {
                printf("\nThe library is empty.\n\n");
            }
            else
            {
                sortBooksInOrderAccessionNumber(myLibrary, totalBooks);
                printf("\n\n%-20s%-20s%-20s%-20s%-20s\n", "Accession Number", "Book title", "Book author", "Book price", "Book is issued");
                for (i = 0; i < totalBooks; i++)
                {
                    printf("%-20d%-20s%-20s%-20.2f%-20d\n", myLibrary[i].accessionNumber, myLibrary[i].bookTitle, myLibrary[i].bookAuthor, myLibrary[i].bookPrice, myLibrary[i].bookIsIssued);
                }
            }
        }
        else if (choice == 7)
        {
            // exit
        }
        else
        {
            printf("Wrong choice.\n\n");
        }
    }
}
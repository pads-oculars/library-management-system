#include <iostream>
#include "library.h"

void Library::run() {
    int choice;
    do {
        std::cout << "1. Add Book\n2. Display Books\n0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 0:
                std::cout << "Exiting the program.\n";
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);
}

void Library::addBook() {
    // Implementation to add a book to the library
}

void Library::displayBooks() {
    // Implementation to display all books in the library
}

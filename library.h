#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "book.h"

class Library {
public:
    void run();

private:
    std::vector<Book> books;
    void addBook();
    void displayBooks();
};

#endif // LIBRARY_H

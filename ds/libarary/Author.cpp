#include "Author.h"
#include "Book.h"

void Author::add(const Book& b) {
    books.push_back(b);
}
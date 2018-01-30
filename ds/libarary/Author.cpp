#include "Author.h"
#include "Book.h"

void Author::add(Book& b) {
    books.push_back(&b);
}
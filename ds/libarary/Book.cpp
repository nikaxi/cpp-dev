#include "Book.h"

void Book::link(Book& b) {
    if (&b != this) {
        next = &b;
        b.pre = this;
    }
}
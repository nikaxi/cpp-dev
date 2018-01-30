#ifndef AUTHOR_H
#define AUTHOR_H
#include "Book.h"
#include <list>
#include <string>
class Author {
    std::string name;
    std::list<Book> books;
    public:
    void add(const Book&);
};
#endif
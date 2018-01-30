#ifndef PARTON_H
#define PARTON_H
#include <string>
#include <list>
#include "Book.h"

class Parton {
    std::string name;
    std::list<Book> books;
    public:
    Parton(std::string _name):name(_name) {}
    void add(const Book&);
};

#endif
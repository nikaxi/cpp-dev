#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book {
    std::string name;
    Book * next;
    Book * pre;
    public:
    Book(std::string _name): name(_name), next(nullptr), pre(nullptr) {};    
    void link(Book& b) {
        next = &b;
        b.pre = this;
    }
};
#endif
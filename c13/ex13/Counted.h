#ifndef COUNTED_H
#define COUNTED_H

#include <iostream>

class Counted {
    int id;
    static int counter;
    public:
    Counted():id(counter++) {
        std::cout << "it is being created "
             << counter << std::endl;
    }

    ~Counted() {
        std::cout << "it is being destroyed "
             << counter << std::endl;
    }
};

int Counted::counter = 0;

#endif
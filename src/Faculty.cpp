#include "Faculty.h"
#include <iostream>

void Faculty::borrowBook() {
    std::cout << name << " is borrowing a book." << std::endl;
}

void Faculty::returnBook() {
    std::cout << name << " is returning a book." << std::endl;
}

void Faculty::displayInfo() const {
    std::cout << "Faculty ID: " << userId << ", Name: " << name << std::endl;
}

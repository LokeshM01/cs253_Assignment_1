#include "Student.h"
#include <iostream>

void Student::borrowBook() {
    std::cout << name << " is borrowing a book." << std::endl;
}

void Student::returnBook() {
    std::cout << name << " is returning a book." << std::endl;
}

void Student::displayInfo() const {
    std::cout << "Student ID: " << userId << ", Name: " << name << std::endl;
}

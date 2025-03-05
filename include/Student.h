#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"

class Student : public User {
public:
    Student(int id, std::string n) : User(id, n) {}
    void borrowBook() override;
    void returnBook() override;
    void displayInfo() const override;
};

#endif

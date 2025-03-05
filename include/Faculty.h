#ifndef FACULTY_H
#define FACULTY_H

#include "User.h"

class Faculty : public User {
public:
    Faculty(int id, std::string n) : User(id, n) {}
    void borrowBook() override;
    void returnBook() override;
    void displayInfo() const override;
};

#endif

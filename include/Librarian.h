#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include "User.h"

class Librarian : public User {
public:
    Librarian(int id, std::string n) : User(id, n) {}
    void borrowBook() override;  // Librarians cannot borrow books, leave empty
    void returnBook() override;  // Librarians cannot return books, leave empty
    void displayInfo() const override;
    void manageBooks();  // Add, remove, or update books
    void manageUsers();  // Add or remove users
};

#endif

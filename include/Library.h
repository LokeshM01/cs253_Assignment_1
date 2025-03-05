#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include <string>
#include "Book.h"
#include "User.h"
#include "Account.h"

class Library {
private:
    std::vector<Book> books;
    std::vector<User*> users;
    
public:
    Library();
    void addBook(const Book& book);
    void addUser(User* user);
    void displayBooks() const;
    void displayUsers() const;
    void borrowBook(User* user, Book* book);
    void returnBook(User* user, Book* book, int overdueDays);
    void saveData();  // Save the current state to files
    void loadData();  // Load data from files
};

#endif

#include "Library.h"
#include <iostream>
#include <fstream>

Library::Library() {
    std::cout << "Library initialized!" << std::endl;
}

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::addUser(User* user) {
    users.push_back(user);
}

void Library::displayBooks() const {
    std::cout << "Displaying books in the library:" << std::endl;
    for (const auto& book : books) {
        book.displayInfo();
    }
}

void Library::displayUsers() const {
    std::cout << "Displaying users in the library:" << std::endl;
    for (const auto& user : users) {
        user->displayInfo();
    }
}

void Library::saveData() {
    // Save books, users, borrowed books, and fines to file.
    std::ofstream outFile("data/library_data.txt");
    outFile.close();
}

void Library::loadData() {
    // Load books and user data from file.
    std::ifstream inFile("data/library_data.txt");
    inFile.close();
}

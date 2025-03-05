#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

class User {
protected:
    int userId;
    std::string name;
    int borrowedBooksCount;

public:
    User(int id, std::string n) : userId(id), name(n), borrowedBooksCount(0) {}
    virtual void borrowBook() = 0;  // Pure virtual function
    virtual void returnBook() = 0;  // Pure virtual function
    virtual void displayInfo() const;
    virtual ~User();  // Virtual destructor
};

#endif

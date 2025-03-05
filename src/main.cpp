#include <iostream>
#include "Library.h"
#include "Student.h"   // Include the Student header
#include "Faculty.h"   // Include the Faculty header

int main() {
    Library library;

    // Add initial books
    library.addBook(Book("C++ Primer", "Lippman", "Addison-Wesley", 2012, "9780321714114"));
    library.addBook(Book("The Great Gatsby", "F. Scott Fitzgerald", "Scribner", 1925, "9780743273565"));

    // Add initial users
    library.addUser(new Student(1, "Alice"));
    library.addUser(new Faculty(2, "Dr. Smith"));

    // Simulate some actions
    library.displayBooks();
    library.displayUsers();

    return 0;
}

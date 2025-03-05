#include "User.h"
#include <iostream>

User::~User() {
    std::cout << "User destroyed!" << std::endl;
}

void User::displayInfo() const {
    std::cout << "User ID: " << userId << ", Name: " << name << std::endl;
}

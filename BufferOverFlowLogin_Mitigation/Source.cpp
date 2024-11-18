#include <stdio.h>
#include <string.h>
#include <iostream>

int main() {
    // Increase buffer size to be safe
    char buff[64] = { 0 };  // Initialize to zero
    const char* password = "password123456";

    std::cout << "Enter the password: ";

    // Read only up to 63 characters (leaving room for null terminator)
    std::cin.getline(buff, sizeof(buff));

    // Use strncmp for bounded comparison
    if (strncmp(buff, password, sizeof(buff)) != 0) {
        std::cout << "Incorrect password\n";
    }
    else {
        std::cout << "Correct password\n";
    }

    return 0;
}

/*
Runtime Bounds Checking using in python and java

Use fgets() instead of gets().
Use strncmp() instead of strcmp(), strncpy() instead of strcpy() and so on.

*/
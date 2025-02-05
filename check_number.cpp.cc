#include <iostream>

/**
 * @file check_number.cpp.cc
 * @brief Program to check if a number is positive, negative, or zero.
 * 
 * This program prompts the user to enter a number and checks if the number
 * is positive, negative, or zero. It outputs the result accordingly.
 * 
 * @author Your Name
 * @version 1.0
 */

/**
 * @brief Checks whether a number is positive, negative, or zero.
 *
 * This function takes an integer input from the user and checks whether the
 * number is positive, negative, or zero. It then prints the result.
 *
 * @return int 0 if the program executes successfully.
 */
int main() {
    int num;

    // Prompt user for input
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (num < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }

    return 0;
}


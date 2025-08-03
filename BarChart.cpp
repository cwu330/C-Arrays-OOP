///////////////////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// HomeWork_2
///////////////////////////////////////////////////////////
#include <iostream>
#include "BarChart.h"

// Constructor included
BarChart::BarChart() {}

// Reads 5 integers from the user and stores the valid numbers in the array
void BarChart::readNums() {
    // Loop to get 5 valid numbers from the user
    for(int i = 0; i < 5; ++i) {
        int input;

        // Prompt the user to enter a number between 1 and 30
        std::cout << "Enter a number" << (i + 1) << " (from 1 to 30): ";
        std::cin >> input;

        // Validate input: must be between 1 and 30
        while(input < 1 || input > 30) {
            std::cout << "Error, Invalid input. Enter a number between 1 and 30: ";
            std::cin >> input;
        }

        // Store the validated number in the array
        nums[i] = input;
    }
}

// Displays a bar chart os astericks for each number
void BarChart::displayChart() {
    std::cout << "\nBar Chart:\n";

    // Loop through each number in the array
    for (int i = 0; i < 5; ++i) {
        // Print a row of asterisks equal to the current number
        for(int j = 0; j < nums[i]; ++j) {
            std::cout << "*"; //Print one asterisk
        }

        // Move to the next line after each bar
        std::cout << "\n";
    }
}

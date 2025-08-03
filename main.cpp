///////////////////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// HomeWork_2
///////////////////////////////////////////////////////////
#include <iostream>
#include "BarChart.h"

int main() {
    //Welcome message
    std::cout << "Welcome to my C++ Program!\n";
    std::cout << "This work demonstrates the use arrays \n";
    std::cout << "with a program that gets 5 numbers from the user from 1-30.\n";
    std::cout << "The user will then see an output of asteriks matching each number entered\n";
    //visual break
    std::cout << "<-------------------------------------------------->\n";

    // Instance of BarChart
    BarChart chart;

    // Read user input and displayt the chart
    chart.readNums();
    chart.displayChart();
   
    // End of Program
    return 0;
}
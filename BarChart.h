///////////////////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// HomeWork_2
///////////////////////////////////////////////////////////
#include <iostream>

// Our header file holds our constructor, public class methods, and private data members
class BarChart {
private:
    int nums[5];                // Our array of 5 elements

    public:
        BarChart();             // Constructor
        void readNums();        // Function to read and validate users input
        void displayChart();    // Function to display bar chart
};
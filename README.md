# BarChart Application in C++

## 📋 Overview

This is a simple Object-Oriented C++ application that reads five numbers (each between 1 and 30) from the user and displays a bar chart using asterisks (`*`). Each number is represented as a horizontal bar of asterisks.

The project follows proper C++ best practices:
- Encapsulation through a `BarChart` class
- Separation of concerns using `.h` and `.cpp` files
- Input validation and clear output

## 📁 Project Structure

BarChart/
├── main.cpp         # Main driver file  
├── BarChart.h       # Header file with class declaration  
├── BarChart.cpp     # Implementation of BarChart methods  
└── README.md        # Project documentation

## 🚀 How to Build and Run

### 🔧 Prerequisites
- A C++ compiler (e.g., `g++`, `clang++`)
- Terminal/Command Prompt

### 🛠️ Build

```bash
g++ main.cpp BarChart.cpp -o BarChartApp

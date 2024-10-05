// MyFunction.cpp
#include <iostream>
#include "IMyFunction.h"
using namespace std;

// Constructor definition
MyFunction::MyFunction() {
    Input = "Test"; // Default initialization
    result = 0;
    firstdigit = ' '; // Initialize firstdigit as a character
    lastdigit = ' ';  // Initialize lastdigit as a character
}

// Method to set up the input string
void MyFunction::InitialSetup(string input) {
    Input = input; // Set the input string
}

// Method to count the number of characters in the string
int MyFunction::CountWord() {
    result = 0; // Reset result before counting
    for (int i = 0; i < Input.size(); i++) {
        result++;
    }
    return result;
}

// Method to return the first and last characters of the string
void MyFunction::ReturntheFirstAndLastdigit() {
    if (!Input.empty()) { // Ensure Input is not empty
        firstdigit = Input[0];               // First character
        lastdigit = Input[Input.size() - 1]; // Last character, fix: Input.size() - 1
    }
}

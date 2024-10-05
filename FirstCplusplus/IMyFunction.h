// IMyFunction.h
#ifndef IMYFUNCTION_H
#define IMYFUNCTION_H

#include <string>
using namespace std;

class MyFunction {
public:
    string Input;        // Input string
    int result;          // Result of word count
    char firstdigit;     // First character of the input string
    char lastdigit;      // Last character of the input string

    MyFunction(); // Constructor

    void InitialSetup(string input); // Setup input string
    int CountWord(); // Count the number of characters
    void ReturntheFirstAndLastdigit(); // Get the first and last characters
};

#endif

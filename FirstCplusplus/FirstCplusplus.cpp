// main.cpp
#include <iostream>
#include "IMyFunction.h" // Include the header file

using namespace std;

int main() {

    bool initialStart = true;
    int inputstage = 0;

    while (initialStart == true) {

        cout << "Please select function to perform" << endl;
        cout << " 1 : for counting the word.." << endl; 
        cout << " 2 : for find first and last digit of sentence.." << endl;
        cout << " any number except (1 && 2) for exits the application " << endl;
        cin >> inputstage;

        if (inputstage == 1) {

            cout << "Please Input the sentence or word" << endl;
            string input;
            cin >> input;
            cout << "Start counting the sentence...." << endl;
            MyFunction myFunc; 

            myFunc.InitialSetup(input); 
            int count = myFunc.CountWord(); 
            cout << "The number of characters in the input is: " << count << endl;
            initialStart = true;

        }
        else if (inputstage == 2) {

            cout << "Please Input the sentence or word" << endl;
            string input;
            cin >> input;
            cout << "Start analysis the sentence...." << endl;
            MyFunction myFunc;
            myFunc.InitialSetup(input);
            myFunc.ReturntheFirstAndLastdigit(); // Call method to get first and last characters
            cout << "First character: " << myFunc.firstdigit << endl;
            cout << "Last character: " << myFunc.lastdigit << endl;
            initialStart = true;
        }
        else {
            bool initialExit= true;

            while (initialExit == true) {

                string Isout;
                cout << "Do you want to exit... ? " << endl;
                cout << "Type 'yes' to exit the application" << endl;
                cout << "Type 'no', If you still want to perform the application" << endl;
                cout << "..." << endl;
                cin >> Isout;
                if (Isout == "yes") {
                    initialStart = false;
                    initialExit = false;
                }
                else if (Isout == "no") {
                    initialStart = true;
                    initialExit = false;
                }
                else {
                    initialExit == true;
                }
            }

        

        }
    }
    return 0;
}

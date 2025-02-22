#include <iostream>
#include <cstdlib>
#include "mathfuncs.h"

using namespace std;

int main() {
    const string EXIT = "quit";
    string command;

    cout << "Welcome to the Swiss Army Calculator!" << endl;
    cout << "Type 'help' for available commands." << endl;

    do {
        cout << "calc: ";
        cin >> command;

        if (command == "help") {
            cout << "Available commands:" << endl;
            cout << "  add <num1> <num2>       - Adds two numbers" << endl;
            cout << "  subtract <num1> <num2>  - Subtracts second number from the first" << endl;
            cout << "  multiply <num1> <num2>  - Multiplies two numbers" << endl;
            cout << "  divide <num1> <num2>    - Divides first number by the second" << endl;
            cout << "  quit                    - Exit the calculator" << endl;
        } 
        else if (command == "add" || command == "subtract" || command == "multiply" || command == "divide") {
            double num1, num2;
            cin >> num1 >> num2;

            try {
                if (command == "add") {
                    cout << "Result: " << add(num1, num2) << endl;
                } 
                else if (command == "subtract") {
                    cout << "Result: " << subtract(num1, num2) << endl;
                } 
                else if (command == "multiply") {
                    cout << "Result: " << multiply(num1, num2) << endl;
                } 
                else if (command == "divide") {
                    cout << "Result: " << divide(num1, num2) << endl;
                }
            } catch (const exception& e) {
                cout << e.what() << endl;
            }
        } 
        else if (command != EXIT) {
            cout << "Unknown command. Type 'help' for a list of commands." << endl;
        }
    } while (command != EXIT);

    cout << "Exiting calculator. Goodbye!" << endl;
    return 0;
}
#include <iostream>
#include <cstdlib>
#include "mathfuncs.h"
#include <ctime>
#include "randfuncs.h"

using namespace std;

int main(int argc, char *argv[]) {
    // Initialize random seed
    srand(time(0));

    const string EXIT = "quit";
    string command;
    cout << "Welcome to the Swiss Army Calculator!" << endl;
    cout << "Type 'help' for available commands." << endl;

    do {
        cout << "calc: ";
        cin >> command;

        if (command == "help") {

            cout << "Available commands:\n";
            cout << "  help      - Show this help menu\n";
            cout << "  flip      - Flip a coin (Heads or Tails)\n";
            cout << "  roll6     - Roll a six-sided die (1-6)\n";
            cout << "  roll20    - Roll a twenty-sided die (1-20)\n";
            
            cout << "  add <num1> <num2>       - Adds two numbers" << endl;
            cout << "  subtract <num1> <num2>  - Subtracts second number from the first" << endl;
            cout << "  multiply <num1> <num2>  - Multiplies two numbers" << endl;
            cout << "  divide <num1> <num2>    - Divides first number by the second" << endl;
            cout << "  quit                    - Exit the calculator" << endl;
        } 
        else if (command == "flip") {
            int result = flipCoin();
            cout << "Coin Flip: " << (result == 0 ? "Heads" : "Tails") << endl;
        } 
        else if (command == "roll6") {
            cout << "Six-Sided Die Roll: " << rollSixSidedDie() << endl;
        } 
        else if (command == "roll20") {
            cout << "Twenty-Sided Die Roll: " << rollTwentySidedDie() << endl;
        } 
        else if (command == EXIT) {
            cout << "Goodbye!" << endl;
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
        else {
            cout << "Unknown command. Type 'help' for a list of commands." << endl;
        }

    } while (command != EXIT);
    cout << "Exiting calculator. Goodbye!" << endl;
    

    return 0;
}


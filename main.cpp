#include <iostream>
#include <cstdlib>
#include <ctime>
#include "randfuncs.h"

using namespace std;

int main(int argc, char *argv[]) {
    // Initialize random seed
    srand(time(0));

    const string EXIT = "quit";
    string command;

    do {
        cout << "calc: ";
        cin >> command;

        if (command == "help") {
            cout << "Available commands:\n";
            cout << "  help      - Show this help menu\n";
            cout << "  flip      - Flip a coin (Heads or Tails)\n";
            cout << "  roll6     - Roll a six-sided die (1-6)\n";
            cout << "  roll20    - Roll a twenty-sided die (1-20)\n";
            cout << "  quit      - Exit the program\n";
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
        else {
            cout << "Unknown command. Type 'help' for a list of commands." << endl;
        }

    } while (command != EXIT);

    return 0;
}

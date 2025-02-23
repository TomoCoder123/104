#include <cstdlib>
#include <ctime>
#include "randfuncs.h"

// Function to flip a coin (returns 0 for Heads, 1 for Tails)
int flipCoin() {
    return rand() % 2;
}

// Function to roll a six-sided die (1-6)
int rollSixSidedDie() {
    return (rand() % 6) + 1;
}

// Function to roll a twenty-sided die (1-20)
int rollTwentySidedDie() {
    return (rand() % 20) + 1;
}

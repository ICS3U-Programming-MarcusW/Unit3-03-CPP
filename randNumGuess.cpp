// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Marcus Wehbi
// Created on: Oct 2022
// This program checks if a user can guess the same number as the
// programs randomly generated number

#include <iomanip>
#include <iostream>

int main() {
    // this function compares the programs chosen number with the users
    // generate a random number between 0 and 9
    // Declare integer variable
    int someRandomNumber;
    // initialize random seed
    srand(time(0));
    // set the parameters to 0 and 9
    someRandomNumber = rand() % 9 + 0;
    // declare variable for users number
    int guessedNumber;
    // get the users chosen number between 0 and 9
    std::cout << "Choose a number between 0 and 9: ";
    std::cin >> guessedNumber;

    // check if the user selected the correct number
    if (someRandomNumber == guessedNumber) {
        // If they did, display it to them
        std::cout << "You guessed correctly.";
    }

    // check if the user selected the incorrect number
    if (someRandomNumber != guessedNumber) {
        // If they did, display it to them
        std::cout << "You guessed wrong.";
    }
}

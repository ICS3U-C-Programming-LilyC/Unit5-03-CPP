// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Dec/1/2023
// This program gets a level from
// the user (1,2,3,4) and will display
// the middle percentage mark for the
// level, using a switch statement.
#include <iostream>

// Creating a function that will find
// the middle mark percentage of the level entered.
int calcMark(std::string level) {
    // Initializing the mark to 0.
    int middleMark;

    // Using if...else statements to find the level's middle mark.
    if (level == "4++") {
        middleMark = 99;
    } else if (level == "4+") {
        middleMark = 96;
    } else if (level == "4") {
        middleMark = 90;
    } else if (level == "4-") {
        middleMark = 84;
    } else if (level == "3+") {
        middleMark = 78;
    } else if (level == "3") {
        middleMark = 74;
    } else if (level == "3-") {
        middleMark = 71;
    } else if (level == "2+") {
        middleMark = 68;
    } else if (level == "2") {
        middleMark = 64;
    } else if (level == "2-") {
        middleMark = 61;
    } else if (level == "1+") {
        middleMark = 58;
    } else if (level == "1") {
        middleMark = 54;
    } else if (level == "1-") {
        middleMark = 51;
        // If the user's input is invalid, then it is assigned -1,
        // which will get error checked in my main() function.
    } else {
        middleMark = -1;
    }

    // Returns the value of the mark to my main() function.
    return middleMark;
}

// My main() function.
int main() {
    // Declared variable to get user input.
    std::string userLevel;

    // Getting user input for their level.
    std::cout << "Enter a level (ex: 1,2,3,4): ";
    std::cin >> userLevel;

    // Calling calc_mark function to get the middle mark of the user's level.
    int userMark = calcMark(userLevel);

    // Using an if statement to check if the input is invalid.
    if (userMark == -1) {
        std::cout << userLevel <<
        " is an invalid input. Please try again.\n";
    } else {
        // Displaying the middle mark since
        // the user input is valid.
        std::cout << "The level " << userLevel
                  << " has a middle percentage mark of "
                  << userMark << "%.\n";
    }
}

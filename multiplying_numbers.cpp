// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on May 2021
// This program multiplies integers from 1 to the user's input and uses loops

#include <iostream>
#include <string>

int main() {
    // This function multiplies the numbers
    std::string numberAsString;
    int numberAsInteger;
    int loopCounter = 0;
    int answer = 1;

    // Input
    std::cout << "This program multiplies integers from 1 to what you enter."
        << std::endl;
    std::cout << "Enter a positive integer: ";
    std::cin >> numberAsString;
    std::cout << "" << std::endl;

    // Process & Output
    try {
        numberAsInteger = std::stoi(numberAsString);

        if (numberAsInteger > 0) {
            while (loopCounter < numberAsInteger) {
                loopCounter = loopCounter + 1;
                answer = answer * loopCounter;
            }
            std::cout << numberAsInteger << "! = " << answer << std::endl;
        } else if (numberAsInteger == 0) {
            std::cout << "0! = 1" << std::endl;
        } else {
            std::cout << numberAsInteger << " is not a positive integer."
                <<std::endl;
        }
    } catch (std::invalid_argument) {
            std::cout << numberAsString << " is not a valid input." <<std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}

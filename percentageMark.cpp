// Copyright (c) 2022 Kaitlyn Ip All rights reserved.
//
// Created by: Kaitlyn Ip
// Created on: Dec 2022
// This program tells user their mark as a percentage

#include <iostream>
#include <string>

int CalculateGrade(char mark) {
    // calculate grade
    int percent;

    // process
    switch (mark) {
        case '4+':
            percent = 97;
        case '4':
            percent = 87;
        case '4-':
            percent = 80;
        case '3+':
            percent = 78;
        case '3':
            percent = 75;
        case '3-':
            percent = 70;
        case '2+':
            percent = 68;
        case '2':
            percent = 65;
        case '2-':
            percent = 61;
        case '1+':
            percent = 58;
        case '1':
            percent = 54;
        case '1-':
            percent = 51;
        case 'R':
            percent = 30;
        case 'NE':
            percent = 0;
        default:
            percent = -1;
    }

    return percent;

    // output
    std::cout << "The area is "
              << "." << std::endl;
}
int main() {
    char mark;
    int markPercentage;

    // input
    std::cout << "Enter the level you want to convert into a percentage: ";
    std::cin >> mark;

    // process and output
    // call functions
    markPercentage = CalculateGrade(mark);
    if (markPercentage == -1) {
        std::cout << "That is not a valid input.";
    } else {
        std::cout << "The level "
        << mark << " as a percentage is: " << markPercentage << "%";
    }
    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}

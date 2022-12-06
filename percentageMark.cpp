// Copyright (c) 2022 Kaitlyn Ip All rights reserved.
//
// Created by: Kaitlyn Ip
// Created on: Dec 2022
// This program tells user their mark as a percentage

#include <iostream>
#include <string>

int Calculate(char mark[]) {
    // this function calculates the mark as a percentage

    // variables
    int percentage;

    // process
    switch (mark[0]) {
        case '4':
            if (mark[1] == '+') {
                percentage = 95;
            } else if (mark[1] == '-') {
                percentage = 80;
            } else {
                percentage = 87;
            }
            break;
        case '3':
            if (mark[1] == '+') {
                percentage = 77;
            } else if (mark[1] == '-') {
                percentage = 70;
            } else {
                percentage = 73;
            }
            break;
        case '2':
            if (mark[1] == '+') {
                percentage = 67;
            } else if (mark[1] == '-') {
                percentage = 60;
            } else {
                percentage = 63;
            }
            break;
        case '1':
            if (mark[1] == '+') {
                percentage = 57;
            } else if (mark[1] == '-') {
                percentage = 50;
            } else {
                percentage = 53;
            }
            break;
        case 'R':
            percentage = 30;
            break;
        default:
            percentage = -1;
    }
    return percentage;
}

int main() {
    // this function shows the mark as a percentage

    // variables
    char userMark[10] = "         ";
    int userPercentage;

    // input
    std::cout << "Enter the level you want to convert"
    << "into a percentage:" << std::endl;
    std::cin >> userMark;

    // Process
    if (userMark[1] != '+' && userMark[1] != '-' && userMark[1] != 0) {
        userPercentage = -1;
    } else {
        userPercentage = Calculate(userMark);
    }

    // output
    if (userPercentage == -1) {
        std::cout << "That is not a valid input." << std::endl;
    } else {
        std::cout << "Your mark as a percentage is: "
        << userPercentage << "%" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}

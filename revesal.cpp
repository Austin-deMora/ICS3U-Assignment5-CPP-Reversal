// Copyright (c) 2021 Austin de Mora All rights reserved.
//
// Created by: Austin de Mora
// Created on: May 2021
// This program finds the reverse of a number

// This program asks you to input a list of numbers  it it will reverse it


#include <iostream>
using namespace std;


int main() {
    int number;
    int reverse = 0;
    int rem;
    std::string number_as_string;

    // input
    std::cout << " I will give you the reverse of the set of numbers you input"
    << std::endl;
    std::cout << "Enter a number : ";
    std::cin >> number_as_string;

    // process & Output
    try {
        int number_as_integer = stoi(number_as_string);
        // length()can only be used on strings
        int counter = number_as_string.length();
        while (counter > 0) {
            counter -= 1;
            std::cout << number_as_string[counter];
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer" << std::endl;
    }
}

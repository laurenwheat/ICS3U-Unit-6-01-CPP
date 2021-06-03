// Copyright (c) 2021 Lauren Wheatley All rights reserved.
//
// Created by: Lauren Wheatley
// Created on: June 2021
// This program adds numbers

#include <iostream>
#include <random>

int main() {
    int tenNumbers[10];
    int randomNumbers;
    float sum;
    float averageValue;

    std::cout << "Here are 10 numbers: " << std::endl;

    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        randomNumbers = idist(rgen);

        tenNumbers[loop_counter] = randomNumbers;
        std::cout << randomNumbers << std::endl;
    }

    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        sum = sum + tenNumbers[loop_counter];
    }

    averageValue = sum / 10;

    std::cout << "The average is " << averageValue << std::endl;
}

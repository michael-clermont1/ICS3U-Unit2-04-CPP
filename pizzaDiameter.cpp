// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: Feb 2022
// This program calculates the price of a pizza
//    with diameter inputted by the user and HST

#include <iostream>
#include <iomanip>

int main() {
    // this function calculates the area and perimeter inputted by user
    const float HST = 0.13;
    const float RENT = 1;
    const float LABOUR = 0.75;
    const float COST_PER_INCH = 0.50;

    float diameter;
    float pizza_price;
    float total;

    // input
    std::cout << "Enter diameter of the pizza (inch): ";
    std::cin >> diameter;

    // process
    pizza_price = RENT + LABOUR + (diameter*COST_PER_INCH);
    total = (pizza_price*HST) + pizza_price;

    // output
    std::cout << "" << std:: endl;
    std::cout << "The final cost is: $" << std::fixed
    << std::setprecision(2) << std::setfill('0') << total << std::endl;
    std::cout<< "\nDone." << std::endl;
}

// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on November 2019
// This program calculates the volume of a cylinder

#include <iostream>
#include <cmath>
#include <iomanip>


double volume(int radius_input, int height_input) {
    // This function converts calculates the volume
    double area;
    // Process
    if (radius_input <= 0 || height_input <= 0) {
        area = -1;
        return area;
    } else {
        area = M_PI * pow(radius_input, 2) * height_input;
        return area;
    }
}


main() {
    // This function gets the input and calls another function
    std::string radius_str;
    std::string height_str;
    int radius;
    int height;
    double result;

    // Input
    std::cout << "Please enter the radius (cm): ";
    std::cin >> radius_str;
    std::cout << "Please enter the height (cm): ";
    std::cin >> height_str;
    try {
        radius = std::stoi(radius_str);
        height = std::stoi(height_str);
    } catch (std::invalid_argument) {
        std::cout << "Wrong input!!!" << std::endl;
        return 0;
    }

    // pass it to the other function
    result = volume(radius, height);

    // Output
    if (result == -1) {
        std::cout << "The input must be more than 0!" << std::endl;
    } else {
        std::cout << "The area of the cylinder is " << std::fixed
        << std::setprecision(2) << std::setfill('0')  << result << " cm^3"
        << std::endl;
    }
}

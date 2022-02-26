// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 02//22
// Description: Shows the area and circumference of a circle with a radius of 15
#include <cmath>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main() {
    int rad = 15;
    int area = M_PI * pow(rad, 2);
    int circ = M_PI * 2 * rad;
    cout <<"The area of a circle with a radius of 15 is " << area <<endl;
    cout <<"The circumference of a circle with a radius of 15 is " << circ;
}

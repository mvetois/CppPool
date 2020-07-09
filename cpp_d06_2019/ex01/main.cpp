/*
** EPITECH PROJECT, 2020
** CPP Pool D06
** File description:
** main
*/

#include <fstream>
#include <iostream>
#include <istream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>
#include <sstream>

float ftoc(float f)
{
    return (5.0 / 9.0 * (f - 32));
}

float ctof(float c)
{
    return (c * 9 / 5 + 32);
}

bool isFloat(std::string myString ) {
    std::istringstream iss(myString);
    float f;
    iss >> std::noskipws >> f;
    return iss.eof() && !iss.fail();
}

int main(void)
{
    std::string a;
    std::string arr[2];
    getline(std::cin, a);
    std::stringstream s(a);
    for (int i = 0; s.good() && i < 2; i++)
        s >> arr[i];
    if (!isFloat(arr[0]))
        return (84);
    std::cout << std::fixed << std::setprecision(3);
    if (arr[1] == "Fahrenheit")
        std::cout << std::right << std::setfill(' ') << std::setw(16) << ftoc(stof(arr[0])) << std::right << std::setfill(' ') << std::setw(16) << "Celsius" << std::endl;
    else if (arr[1] == "Celsius")
        std::cout << std::right << std::setfill(' ') << std::setw(16) << ctof(stof(arr[0])) << std::right << std::setfill(' ') << std::setw(16) << "Fahrenheit" << std::endl;
    return (0);
}
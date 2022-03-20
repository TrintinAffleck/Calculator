// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Calculator.h"
#include <math.h>

int main()
{
    std::cout << "Welcome to my basic calculator in C++\n";
    std::cout << "Type your operation to perform: \n";
    std::cout << "Please type either add subtract multiply or divide (No capital letters)\n";
    std::cin >> operation;

    if (operation == add) {
        std::cout << "Current Operation: " << operation << "\n";
        std::cout << "Adding\n";
        std::cout << "Type your first number:";
        std::cin >> num1;
        std::cout << "Type your second number:";
        std::cin >> num2;
        std::cout << Add() << "\n";
    };

    if (operation == subtract)
    {
        std::cout << "Current Operation: " << operation << "\n";
        std::cout << "Type your first number:";
        std::cin >> num1;
        std::cout << "Type your second number:";
        std::cin >> num2;
        std::cout << Subtract() << "\n";
    };

    if (operation == multiply) {
        std::cout << "Current Operation: " << operation << "\n";
        std::cout << "multiplying\n";
        std::cout << "Type your first number:";
        std::cin >> num1;
        std::cout << "Type your second number:";
        std::cin >> num2;
        std::cout << Multiply() << "\n";
    };

    if (operation == divide) {
        std::cout << "Current Operation: " << operation << "\n";
        std::cout << "Dividing\n";
        std::cout << "Type your first number:";
        std::cin >> num1;
        std::cout << "Type your second number:";
        std::cin >> num2;
        std::cout << Divide() << "\n";
    };

    std::cin.get();
};


float Add()
{
    return num1 + num2;
}

float Subtract()
{
    return num1 - num2;
}

float Multiply()
{
    return num1 * num2;
}

float Divide()
{
    return num1 / num2;
}

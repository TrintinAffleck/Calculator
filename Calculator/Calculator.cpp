// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include "Calculator.h"

int main()
{
std::cout << "Type your operation to perform: " << std::endl;
std::cin >> operation;
 

if (operation == "add" or "Add")
{
    std::cout << "Current Operation: " << operation << "\n";

    std::cout << "actually adding" << std::endl;
    std::cout << "Type your first number:";
    std::cin >> Num1;
    std::cout << "Type your second number:";
    std::cin >> Num2;
    std::cout << Add() << "\n";
};


if (operation == "subtract" or "Subtract")
{
    std::cout << "Current Operation: " << operation << "\n";
    std::cout << "actually subtracting" << std::endl;
    std::cout << "Type your first number:";
    std::cin >> Num1;
    std::cout << "Type your second number:";
    std::cin >> Num2;
    std::cout << Subtract() << "\n";
}

else
{
    operation = "";
}


if (operation == "multiply" or "Multiply")
{
    std::cout << "Current Operation: " << operation << "\n";
    std::cout << "actually multiplying" << std::endl;
    std::cout << "Type your first number:";
    std::cin >> Num1;
    std::cout << "Type your second number:";
    std::cin >> Num2;
    std::cout << Multiply() << "\n";
};


if (operation == "divide" or "Divide")
{
    std::cout << "Current Operation: " << operation << "\n";
    std::cout << "actually dividing" << std::endl;
    std::cout << "Type your first number:";
    std::cin >> Num1;
    std::cout << "Type your second number:";
    std::cin >> Num2;
    std::cout << Divide() << "\n";
};

std::cin.get();
}


int Add()
{
    return Num1 + Num2;
}

int Subtract()
{
    return Num1 - Num2;
}

int Multiply()
{
    return Num1 * Num2;
}

int Divide()
{
    return Num1/Num2;
}
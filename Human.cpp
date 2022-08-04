#include "Human.h"
#include <iostream>

char Human::getMove()
{
    return choice;
}

void Human::makeMove()
{
    char input;
    while (1)
    {
        std::cout << "Enter move: ";
        std::cin >> input;
        if ((input == 'R') || (input == 'P') || (input == 'S'))
        {
            choice = input;
            break;
        }
    }
}
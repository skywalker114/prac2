#include "Computer.h"
#include <stdlib.h>
#include <time.h>

void Computer::makeMove()
{
    choice = 'R';
}

char Computer::getMove()
{
    return choice;
}

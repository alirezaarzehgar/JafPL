#ifndef _COMMANDS_H
#define _COMMANDS_H
#define _MAX_NUMBER 1024

#include <iostream>
#include "TypeSystem.h"
#include "Errors.h"

#include "Commander.h"
#include "Commands.h"
#include <boost/algorithm/string.hpp>

using namespace boost;
using namespace std;

class Commands
{
private:
    
public:
    Errors print(string value);
    Errors variable(string value);
};

#endif // _COMMANDS_H
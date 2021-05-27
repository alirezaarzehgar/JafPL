#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
#include <boost/algorithm/string.hpp>

#include "Errors.h"
#include "Commander.h"
#include "Storage/Storage.h"

using namespace std;
using namespace boost;

#ifndef _ARG_PARSER_H
# include "ArgParser.h"
#endif // !_ARG_PARSER_H

#define _MAX_NUMBER 1024

using namespace std;

class Compiler
{
private:
    string targetFile;
    Storage storage;
    
public:

    Compiler(ArgParser argParser, Storage storage);

    void interpreter();
    unsigned int compute(string currentLine);
};

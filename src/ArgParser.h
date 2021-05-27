#ifndef _ARG_PARSER_H
#define _ARG_PARSER_H

#include <iostream>

using namespace std;

class ArgParser
{
private:
    string mainFile;
    
public:
    ArgParser(int argc, char const *argv[]);

    string mainSourceFile();
};

#endif // !_ARG_PARSER_H


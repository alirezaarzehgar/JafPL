#include "ArgParser.h"

ArgParser::ArgParser(int argc, char const *argv[])
{
    if (argc < 2)
    {
        cerr << argv[0] << " [filepath]" << endl;
        exit(EXIT_FAILURE);
    }
    
    this->mainFile = argv[1];
}

string ArgParser::mainSourceFile() {
    return this->mainFile;
}
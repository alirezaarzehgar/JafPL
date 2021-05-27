#include "Compiler.h"

using namespace std;
using namespace boost;

Compiler::Compiler(ArgParser argParser, Storage storage)
{
    this->storage = storage;
    
    this->targetFile = argParser.mainSourceFile();

    this->interpreter();
}

void Compiler::interpreter() {
    ifstream targetFile(this->targetFile);
    string currntLine;

    if (targetFile.fail())
    {
        targetFile.close();
        cerr << "[filepath]";
        exit(EXIT_FAILURE);
    }

    int currentLineNumber = 0;

    while (getline(targetFile, currntLine))
    {
        if(this->compute(currntLine) == Errors::FAILURE) 
            cout << "Error in line "  << currentLineNumber <<  ":\n\t" << currntLine << endl;

        currentLineNumber++;
    }
    
    targetFile.close();
}

unsigned int Compiler::compute(string currentLine) {
    trim(currentLine);

    vector<string> result;
    split(result, currentLine, is_any_of(" "));
  
    vector<string> args = vector<string>(result.begin() + 1, result.end());
    string rawArgs = join(args, " ");

    Commander commander(result[0], rawArgs, this->storage);
    return commander.status;
}
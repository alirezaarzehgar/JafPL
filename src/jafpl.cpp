#include "Compiler.h"
#include "ArgParser.h"

int main(int argc, char const *argv[])
{
    ArgParser argParser(argc, argv);
    Storage storage;

    storage.variables = {
        // type, name, value
        {"str", "__FILE__", argParser.mainSourceFile() }
    };

    Compiler compiler(argParser, storage);
    
    exit(EXIT_SUCCESS);
}

#include "Commander.h"

Commander::Commander(string command, string rawArgs, Storage storage) {
    Commands commands;

    if (command == "print")
        this->status = commands.print(rawArgs);

    if (this->isVar(command))
        this->status = commands.variable(rawArgs);
}

bool Commander::isVar(string command) {
    return command[0] == '$';
}

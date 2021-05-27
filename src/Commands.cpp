#include "Commands.h"
#include <boost/algorithm/string.hpp>

using namespace boost;

Errors Commands::print(string value) {
    TypeSystem type(value);
    Type valueType = type.findType();

    if (valueType == Type::STRING)
        cout << type.getString();

    else if (valueType == Type::WRONG_TYPE)
        return Errors::FAILURE;
    else
        cout << value;

    return Errors::SUCCESS;
}

Errors Commands::variable(string value) {
    // TODO
    return Errors::SUCCESS;
}
#ifndef _TYPE_SYSTEM_H
#define _TYPE_SYSTEM_H

#include <iostream>
#include <boost/algorithm/string.hpp>

using namespace boost;
using namespace std;

enum Type {
    INT,
    FLOAT,
    STRING,
    WRONG_TYPE
};

class TypeSystem
{
public:
    string textValue;

    TypeSystem(string value = "");

    int toInt(string value = "");
    int toInt(float value);

    float toFloat(string value = "");
    float toFloat(int value);

    string toString(int value);
    string toString(float value);

    bool isInt(string value = "");
    bool isFloat(string value = "");
    bool isString(string value = "");

    string getString(string value = "");

    Type findType(string value = "");
};

#endif // !_TYPE_SYSTEM_H
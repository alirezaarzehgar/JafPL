#include "TypeSystem.h"
#include "StringFormats.h"

TypeSystem::TypeSystem(string value) {
    this->textValue = value;
}

int TypeSystem::toInt(string value) {
    if (value == "")
        value = this->textValue;
    
    return stoi(value);
}
int TypeSystem::toInt(float value) { return (int)value; }

float TypeSystem::toFloat(string value) {
    if (value == "")
    value = this->textValue;

    return stof(value);
}

float TypeSystem::toFloat(int value) { return (float)value; }

string TypeSystem::toString(int value) { return to_string(value); }
string TypeSystem::toString(float value) { return to_string(value); }


bool TypeSystem::isInt(string value) { 
    if (value == "")
    value = this->textValue;

    try
    {
        stod(value);
        return true;
    }
    catch(const std::exception &){
        return false;
    }
}

bool TypeSystem::isFloat(string value) { 
    if (value == "")
    value = this->textValue;

    try
    {
        stof(value);
        return true;
    }
    catch(const std::exception &){
        return false;
    }
}

bool TypeSystem::isString(string value) {
    if (value == "")
    value = this->textValue;

    return (value[0] == '"' && value[value.length() - 1] == '"') 
        || (value[0] == '\'' && value[value.length() - 1] == '\'');
}

string TypeSystem::getString(string value) {
    if (value == "")
        value = this->textValue;

    StringFormats strFormat(value);

    // if (value[0] == '"')
    value = strFormat.escapeCharacters();

    return value.substr(1, value.size() - 2);
}

Type TypeSystem::findType(string value) {
    if (value == "")
        value = this->textValue;
    
    if (this->isInt(value))
        return Type::INT;

    if (this->isFloat(value))
        return Type::FLOAT;

    if (this->isString(value))
        return Type::STRING;

    else
        return Type::WRONG_TYPE;
}
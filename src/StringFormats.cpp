#include "StringFormats.h"


StringFormats::StringFormats(string text)
{
    this->textValue = text;
}

string StringFormats::escapeCharacters() {
    string result = this->textValue;

    if (result.find("\\n") != string::npos)
        replace_all(result, "\\n", "\n");
    
    if (result.find("\\t") != string::npos)
        replace_all(result, "\\t", "\t");
    
    if (result.find("\\v") != string::npos)
        replace_all(result, "\\v", "\v");
    
    if (result.find("\\a") != string::npos)
        replace_all(result, "\\a", "\a");
    
    // if (result.find("\\\"") != string::npos)
        replace_all(result, "\\\"", "\"");
    
    if (result.find("\\\'") != string::npos)
        replace_all(result, "\\\'", "\'");
    
    if (result.find("\\\\") != string::npos)
        replace_all(result, "\\\\", "\\");

    return result;
} 
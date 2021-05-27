#ifndef _STRING_FORMAT_H
#define _STRING_FORMAT_H

#include <iostream>
#include <bits/stdc++.h>
#include <boost/algorithm/string.hpp>

using namespace boost;
using namespace std;

class StringFormats
{
private:
    string textValue;

public:
    StringFormats(string text);
    string escapeCharacters();
};


#endif // !_STRING_FORMAT_H
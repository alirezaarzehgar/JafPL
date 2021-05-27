#ifndef _COMMANDER_H
#define _COMMANDER_H

#include <iostream>
#include <cstdarg>
#include <bits/stdc++.h>
#include "Errors.h"
#include "Commands.h"
#include "Storage/Storage.h"

using namespace std;

class Commander
{
private:
    vector<vector<string>> localVariable;
    
public:
    Errors status;
    Commander(string command, string rawArgs, Storage storage);
    
    bool isVar(string command);
};

#endif //_COMMANDER_H
